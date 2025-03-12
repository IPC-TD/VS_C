#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"

// 初始化堆
void HeapInit(Heap* php)
{
	assert(php);
	php->_arr = (HPDataType*)malloc(sizeof(HPDataType) * HEAP_CAPASITY_INIT_MAX);
	assert(php->_arr);
	php->_capasity = HEAP_CAPASITY_INIT_MAX;
	php->_size = 0;
}
// 数值值交换
void swap(HPDataType* s1, HPDataType* s2)
{
	HPDataType tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
// 函数使用前提条件：跟的左右两个子树，都要是小堆状态。
// 构建小堆结构（向下调整堆的结构）
void AdjustDown(HPDataType* arr, int n, int parent)
{
	assert(arr);
	// 默认左孩子更小
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
			// 因为以孩子为跟的树是小堆，因此没有更小的值可以上浮了
			break;
		}
	}
}
// 堆的构建（传入数组来初始化堆）
void HeapCreat(Heap* php, HPDataType* arr, int n)
{
	assert(php);
	// 拷贝数据
	php->_arr = (HPDataType*)malloc(sizeof(HPDataType) * n);
	assert(php->_arr);
	memmove(php->_arr, arr, sizeof(HPDataType) * n);

	// 构建堆结构（小堆）
	// 从完全二叉树的最左下的2度节点开始调整，即从下往上构建堆（结合画图理解）
	for (int parent = (n - 1 - 1) / 2; parent >= 0; --parent)
	{
		AdjustDown(php, n, parent);
	}
}
// 销毁堆
void HeapSestroy(Heap* php)
{
	assert(php);
	free(php->_arr);
	php->_capasity;
	php->_size;
}