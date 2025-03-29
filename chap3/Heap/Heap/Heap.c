#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"

// 初始化堆
void HeapInit(Heap* php)
{
	assert(php);
	php->_arr = NULL;
	php->_capacity = 0;
	php->_size = 0;
}
// 数值交换
void swap(HPDataType* s1, HPDataType* s2)
{
	HPDataType tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
// 函数使用前提条件：跟的左右两个子树，都要是小堆状态。
// 构建小堆结构（向下调整堆的结构）
void AdjustDown(HPDataType* arr, int n, int root) // adjust / ??d??st / vt. 校准；调整，使…适合
{
	assert(arr);
	// 默认左孩子更小
	int parent = root;
	int child = parent * 2 + 1; // 推导公式得出
	while (child < n)
	{
		// 处理右孩子更小的情况
		if (child + 1 < n && arr[child + 1] < arr[child])
		{
			++child;
		}
		// 如果孩子比父亲小，则交换位置（小值上浮）
		if (arr[child] < arr[parent])
		{
			swap(&arr[child], &arr[parent]);
			// 迭代
			parent = child;
			child = child * 2 + 1;
		}
		else
		{
			// 因为以孩子为根的树是小堆，因此没有更小的值可以上浮了
			break;
		}
	}
}
// 堆的构建（传入数组来初始化堆）
void HeapCreat(Heap* php, HPDataType* arr, int n)
{
	assert(php);
	// 拷贝数据
	php->_size = php->_capacity =  n;
	php->_arr = (HPDataType*)malloc(sizeof(HPDataType) * n);
	assert(php->_arr);
	memmove(php->_arr, arr, sizeof(HPDataType) * n);

	// 构建堆结构（小堆）
	// 从完全二叉树的最左下的2度节点开始调整（从最后一个非叶子节点开始），即从下往上构建堆（结合画图理解）
	for (int parent = (n - 1 - 1) / 2; parent >= 0; --parent)
	{
		AdjustDown(php->_arr, n, parent);
	}
}
// 销毁堆
void HeapDestroy(Heap* php)
{
	assert(php);
	free(php->_arr);
	php->_arr = NULL;
	php->_capacity = php->_size = 0;
}
// 打印
void HeapPrint(Heap* php)
{
	assert(php);
	for (int i = 0; i < php->_size; ++i)
	{
		printf("%d  ", php->_arr[i]);
	}
	printf("\n");
}
// 堆的插入
void HeapPush(Heap* php, HPDataType x)
{
	assert(php);
	// 检查是否需要增容
	if (php->_size == php->_capacity)
	{
		php->_capacity *= 2;
		HPDataType* tmp = (HPDataType*)realloc(php->_arr, sizeof(HPDataType) * php->_capacity);
		assert(tmp);
		php->_arr = tmp;
	}
	// 堆尾插入
	php->_arr[php->_size] = x;
	++php->_size;
	// 向上调整，保持堆的性质（小堆）
	int child = php->_size - 1;
	int parent = (child - 1) / 2;
	while (child > 0) // 易错点：如果用父母结点判断，当child = 0时，会出现 parent = （0 -1）/ 2 = 0，
	{
		if (php->_arr[child] < php->_arr[parent])
		{
			swap(&php->_arr[child], &php->_arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
// 堆的删除（删堆顶数据）
void HeapPop(Heap* php)
{
	assert(php);
	assert(!HeapEmpty(php)); // 防止堆为空
	// 将堆顶数据与堆尾数据交换， 并在堆尾删除
	swap(&php->_arr[0], &php->_arr[php->_size - 1]);
	--php->_size;
	// 对调上来的堆顶数据进行向下调整
	AdjustDown(php->_arr, php->_size, 0);
}
// 取堆顶的数据
HPDataType HeapTop(Heap* php)
{
	assert(php && !HeapEmpty(php));
	return php->_arr[0];
}
// 堆的数据个数
int HeapSize(Heap* php)
{
	assert(php);
	return php->_size;
}
// 堆的判空
int HeapEmpty(Heap* php)
{
	assert(php);
	return php->_size ? 0 : 1;
}