#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include "Stack.h"

// 下面的函数，都默认排升序

// 打印数组
void Print(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
// 数据交换
void Swap(int* a, int* b)
{
	assert(a && b);
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
// 插入排序
void InsertSort(int* a, int n)
{
	assert(a);
	// 每次循环处理a[i+1]位置的数据的插入
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];
		// 如果end位置的数，比tmp的大，则向后移动
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		// 停下来说明end已经是-1位置，或者a[end]比tmp小
		// 则end + 1位置是，tmp应放入的正确位置
		a[end + 1] = tmp;
	}
}

// 希尔排序
void ShellSort(int* a, int n)
{
	assert(a);
	int end = 0;
	int tmp = 0;
	int gap = n;
	// 间隔由大到小，进行多次插入排序（预排序）
	// gap大于1时，就是预排序的过程
	while (gap > 1)
	{
		// 间距每次缩小3倍，效率较高（综合场景的优解）
		// +1保证了最后一次，gap一定为1
		// 当gap == 1 时，相当于直接插入排序（保证有序）
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i)
		{
			end = i;
			tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
		// Print(a, n); // 打印每次预排序后的的数组情况
	}

}

// 选择排序
void SelectSort(int* a, int n)
{
	assert(a);
	// 每次遍历选择出最小和最大的数
	// 分别放置于左右两侧，然后缩减边界
	// 待排序范围：[left，right]，都为闭区间
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		// 遍历获得最小和最大数的下标
		int mini_i = left;
		int max_i = left;
		for (int i = left + 1; i <= right; ++i)
		{
			if (a[i] < a[mini_i])
			{
				mini_i = i;
			}
			if (a[i] > a[max_i])
			{
				max_i = i;
			}
		}
		// 将最小数换到左边
		Swap(&a[left], &a[mini_i]);
		
		// 逻辑上理解困难的，建议手动画图解决
		// 如果max原本在left位置，会被上面换了
		// 所以需要判断
		// 即原本的最大值，是否被从left换到现在mini_i的位置
		if (&a[max_i] < &a[mini_i])
		{
			max_i = mini_i; // 更新最大值位置
		}
		// 将最大值放到右边
		Swap(&a[right], &a[max_i]);

		++left;
		--right;
	}
}

// 堆排序
// 向下调整算法
void AdjustDwon(int* a, int n, int root)
{
	assert(a);
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		// 如果右孩子存在，且大于左孩子，则交换
		if (child + 1 < n && a[child] < a[child + 1])
		{
			++child;
		}

		// 如果孩子比父亲大，则交换
		if (a[child] > a[parent])
		{
			Swap(&a[parent], &a[child]);
		}

		// 迭代，继续调整交换后子树，维持堆性质
		parent = child;
		child = parent * 2 + 1;
	}

}
// 堆排序
void HeapSort(int* a, int n)
{
	assert(a);
	// 对数组进行建堆
	// 从最后一个非叶子节点，一开始向下调整，直到堆顶
	int parent = (n - 1 - 1) / 2; // child = n - 1；
	while (parent >= 0)
	{
		AdjustDwon(a, n, parent);
		--parent;
	}
	// 堆排序
	for (int i = n - 1; i > 0; --i)
	{
		// 每次取堆顶数据与堆尾元素交换，
		// 然后排除堆尾数据，不再视为堆的部分
		Swap(&a[0], &a[i]);

		// 对堆顶数据进行向下调整
		AdjustDwon(a, i, 0);
	}
}

// 冒泡排序
void BubbleSort(int* a, int n)
{
	assert(a);
	// 冒泡排序，每趟遍历将一个最大值排到范围尾部
	// 其过程是对每个元素比较，如果比后个元素大则交换，直到尾部停止
	// 总共需要遍历 n - 1 次

	// 待排序元素范围
	for (int end = n - 1; end > 0; --end)
	{
		// 一趟遍历，将一个最大值换到end处
		for (int i = 0; i < end; ++i)
		{
			if (a[i] > a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
			}
		}
	}
}
// 三数取中
int GetMidIndex(int* a, int left, int right)
{
	assert(a);
	int mid = left + (right - left) / 2;
	if (a[left] < a[right])
	{
		if (a[mid] > a[right])
		{
			return right;
		}
		else if (a[left] > a[mid])
		{
			return left;
		}
		else
		{
			return mid;
		}
	}
	else // a[left] >= a[right]
	{
		if (a[mid] > a[left])
		{
			return left;
		}
		else if (a[right] > a[mid])
		{
			return right;
		}
		else
		{
			return mid;
		}
	}
}
//// 单函数版本
//// 快速排序
//void QuickSort(int* a, int left, int right)
//{
//	assert(a);
//	// 只在范围有效时递归
//	if (right <= left)
//	{
//		return;
//	}
//	int leftTmp = left;
//	int rightTmp = right;
//	// 获取中位数作为key（防止接近有序情况下选到极值）
//	int midIndex = GetMidIndex(a, left, right);
//	Swap(&a[right], &a[midIndex]);
//	int key = right;
//	// 排布成以key为中心，左小右大序列
//	while (left < right)
//	{
//		if (a[left] <= a[key]) 
//		{
//			++left;
//		}
//		else if (a[right] >= a[key])
//		{
//			--right;
//		}
//		else 
//		{
//			Swap(&a[left], &a[right]);
//		}
//	}
//	Swap(&a[left], &a[key]);
//
//	// 递归排序左右序列
//	QuickSort(a, leftTmp, key - 1);
//	QuickSort(a, key+1, rightTmp);
//}
// 快排分区函数（左右指针法 / hoare版本）
int PartSort1(int* a, int begin, int end)
{
	// 由主QuickSort传入的end > begin
	assert(a);
	int key = end;
	// 排布成以key为中心，左小右大序列
	while (begin < end)
	{
		if (a[begin] <= a[key])
		{
			++begin;
		}
		else if (a[end] >= a[key])
		{
			--end;
		}
		else // 找打左区大数，和右区的小数，执行交换
		{
			Swap(&a[begin], &a[end]);
		}
	}
	// 停下来时，begin
	Swap(&a[begin], &a[key]);

	return begin;
}
// 快排分区函数（挖坑法）
int PartSort2(int* a, int begin, int end)
{
	// 由主QuickSort传入的end > begin
	assert(a);
	int key = a[end];
	// 排布成以key为中心，左小右大序列
	while (begin < end)
	{
		// 找左分区比key大的数
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}
		// 将左区找到的大数，填充到右区的坑，左区begin位置形成新的坑
		Swap(&a[begin], &a[end]);

		// 找右分区比key小的数
		while (begin < end && a[end] >= key)
		{
			--end;
		}
		// 将右区找到的大数，填充到左区的坑，现右区end位置重新变成坑
		Swap(&a[begin], &a[end]);
	}
	// 将key填充到坑中（停下来时，begin位置必然为坑）
	a[begin] = key;

	return begin;
}
// 快排分区函数（前后指针法）
int PartSort3(int* a, int begin, int end)
{
	// 由主QuickSort传入的end > begin
	assert(a);
	int key = a[end];
	// 前后指针法，cur将找到的左分区数，通过prev放置到左分区
	// 排布成以key为中心，左小右大序列
	int cur = begin;
	int prev = cur - 1;
	while (cur <= end)
	{
		// cur指针负责找小于key的数
		// 相等的就跳过不交换了，减少交换次数。
		while (cur < end && a[cur] >= key) 
		{
			++cur;
		}
		// 将找到的比key小的数，换到前面++prev的位置
		// 最后一次cur将停在key位置
		if (cur <= end)
		{
			Swap(&a[++prev], &a[cur++]);
		}
	}
	// 到这里，小于等于key都到排到左分区了
	// 且prev位置，就是界限位置
	return prev;
}
// 快速排序
void QuickSort(int* a, int left, int right)
{
	assert(a);
	// 只在范围有效时递归
	if (right <= left)
	{
		return;
	}
	else if (right - left > 10)
	{
		// 获取中位数作为key（防止接近有序情况下选到极值）
		int midIndex = GetMidIndex(a, left, right);
		Swap(&a[right], &a[midIndex]);

		// 分区函数
		// 将在数组[left,right]范围内排序，
		// 排成以a[right]值为界，左小右大的序列，并返回界限位置

		//// 左右指针法
		//int divided = PartSort1(a, left, right); 
		//// 挖坑法
		//int divided = PartSort2(a, left, right);
		// 前后指针法
		int divided = PartSort3(a, left, right);

		// 递归排序左右序列
		QuickSort(a, left, divided - 1);
		QuickSort(a, divided + 1, right);
	}
	else
	{
		// 当区间较小时，递归的次数较多，代价较大
		// 可以调用其他对于小区间的排序效果较好的函数来排
		// 想象最好的理性情况下，满二叉树底层的节点数，
		// 就可以知道为了排这10个数，需要调用多少次递归了，
		// 更何况并不是每次都能取到完美中位数作为key
		InsertSort(a + left, right - left + 1);
	}
}
//// 快速排序 非递归实现（可用）（使用int为栈元素）
//void QuickSortNonR(int* a, int left, int right)
//{
//	if (right <= left)
//		return;
//
//	Stack s;
//	StackInit(&s);
//
//	StackPush(&s, right);
//	StackPush(&s, left);
//
//	while (!StackEmpty(&s))
//	{
//		int begin = StackTop(&s);
//		StackPop(&s);
//		int end = StackTop(&s);
//		StackPop(&s);
//		if (begin >= end)
//		{
//			continue;
//		}
//		else if (end  - begin > 10)
//		{
//			int mid = GetMidIndex(a, begin, end);
//			Swap(&a[end], &a[mid]);
//			int divided = PartSort1(a, begin, end);
//			StackPush(&s, end);
//			StackPush(&s, divided + 1);
//			StackPush(&s, divided - 1);
//			StackPush(&s, begin);
//		}
//		else
//		{
//			InsertSort(a + begin, end - begin + 1);
//		}
//	}
//	StackDestroy(&s);
//}

// 快速排序 非递归实现 （使用range为栈元素）
// （问题已经排除，此代码逻辑正常，疑似此前栈代码中，扩容存在问题）
void QuickSortNonR(int* a, int left, int right)
{
	if (right <= left)
		return;

	// 创建并初始化栈
	Stack s;
	StackInit(&s);
	// 将第一段区间范围入栈
	// 这里的第二个参数，没有使用结构体变量r
	// 	// Range r = { left, right };
	// 而是使用“复合字面量”，创建了一个匿名结构体对象，C99起支持
	StackPush(&s, (Range) { left, right });

	while (!StackEmpty(&s))
	{
		Range r = StackTop(&s);
		StackPop(&s);
		//printf("出栈数据：%d %d\n", r._left, r._right);
		if (r._left >= r._right)
		{
			continue;
		}
		else if (r._right - r._left > 10)
		{
			int mid = GetMidIndex(a, r._left, r._right);
			Swap(&a[r._right], &a[mid]);
			int divided = PartSort1(a, r._left, r._right);
			//printf("入栈数据1：%d %d\n", r1._left, r1._right);
			//printf("入栈数据2：%d %d\n", r2._left, r2._right);
			//Sleep(100);
			StackPush(&s, (Range) { r._left, divided - 1 }); // C99起支持
			StackPush(&s, (Range) { divided + 1, r._right }); // C99起支持
			//Range r1 = { r._left, divided - 1 };
			//Range r2 = { divided + 1, r._right };
			//StackPush(&s, r2); 
			//StackPush(&s, r1);
		}
		else
		{
			InsertSort(a + r._left, r._right - r._left + 1);
		}
	}
	StackDestroy(&s);
}

// 归并两段无间隔的升序数组
void MergeArray(int* a, int begin1, int end1, int begin2, int end2, int* tmp)
{
	assert(a && tmp);
	int index = begin1, left = begin1, right = end2;
	// 从两端序列的左边开始遍历，选择更小的数，写入tmp数组
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}
	// 到这说明其他一段序列已经被完全写入，则将剩下的另一组写入即可
	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}
	// 将存储在tmp数组中归并好的数据，写回到原数组中
	for (int i = left; i <= right; ++i)
	{
		a[i] = tmp[i];
	}
}
void _MergeSort(int* a, int left, int right, int* tmp)
{
	assert(a && tmp);
	// 排除无效区间
	if (left >= right)
	{
		return;
	}
	// 将大端的区间进行递归归并
	else if (right - left > 10)
	{
		// 将区间分割成左右对称区间后
		int begin1 = left;
		int end1 = left + (right - left) / 2;
		int begin2 = end1 + 1;
		int end2 = right;
		// 递归排序左右区间
		_MergeSort(a, begin1, end1, tmp);
		_MergeSort(a, begin2, end2, tmp);
		// 此时左右区间都为升序，函数将两端有序区间合并成完整的一段有序区间
		MergeArray(a, begin1, end1, begin2, end2, tmp);
	}
	// 小区间用插入排序，减少递归次数（二叉树后面几层节点数多，也表示递归次数多）
	else
	{
		// 直接插入排序函数期望获得，数组的起点和元素个数
		InsertSort(a + left, right - left + 1);
	}
}
// 归并排序递归实现
void MergeSort(int* a, int n)
{
	assert(a);
	// 0个和1个数，符合有序定义
	if (n <= 1)
		return;

	// 开辟一段数组，用于合并两端有序区间时的临时存储
	// 这里开好，里面递归时，就不同频繁malloc，减少内存碎片
	int* tmp = (int*)malloc(sizeof(int) * n);
	assert(tmp);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

// 原本的归并函数实现（非递归）
void _MergeSortNonR(int* a, int left, int right, int* tmp)
{
	assert(a && tmp);
	if (left >= right)
		return;

	// 先将小于10的区间用插入排序，整成（right + 1）/2 段有序数组
	int gap = 10;
	for (int i = 0; i <= right; i += gap) // 循环1
	{
		InsertSort(a + i, i + gap <= right + 1 ? gap : right + 1 - i);
	}
	// 再将有序区间，两两进行归并
	for (; gap <= right; gap *= 2)
	{
		// 这里每段gap，其含义在于理想情况下，有序区间的长度
		// 下面控制流，其任务在于，将目前两段gap长度的有效区间，合并为一条新的有序的区间
		// 
		// 举个例子：
		// 假设right = 99，gap = 10，即数组有100个数
		// for循环2的意义在于，将10段10长度的有序数组，归并为 5段20长度的有序数组
		// 下一次循环 gap = 20，则会将5段20长度的有序数组，归并为2段40长度的数组+1段10长度的有序数组。
		// 
		// 下面的边界控制，其核心在于控制结束条件end1 和 end2 始终不超过right
		// 执行每一步前，都判断区间是否有效

		// 起始条件
		// 这段夹杂太多判断条件，不利于CPU的运算，不如下面的那种
		int begin1 = 0;
		int end1 = gap - 1 <= right ? gap - 1 : right;
		int begin2 = end1 + 1 <= right ? end1 + 1 : right;
		int end2 = begin2 + gap - 1 <= right ? begin2 + gap - 1 : right;
		int index = 0;
		while (begin1 <= right)
		{
			// 将两端有序区间，合并成一段有序区间
			MergeArray(a, begin1, end1, begin2, end2, tmp);
			// 迭代需要操作的区间
			begin1 = end2 + 1;
			end1 = begin1 + gap - 1;
			end1 = end1 > right ? right : end1;

			begin2 = end1 + 1;
			end2 = begin2 + gap - 1;
			end2 = end2 > right ? right : end2;
		}
	}
}
// 归并排序非递归实现
void MergeSortNonR(int* a, int n)
{
	assert(a);
	// 0个和1个数，符合有序定义
	if (n <= 1)
		return;

	int* tmp = (int*)malloc(sizeof(int) * n);
	assert(tmp);

	//_MergeSortNonR(a, 0, n - 1, tmp);

	int insetGap = 10;
	for (int i = 0; i < n; i += insetGap) 
	{
		// 直接插入函数期望接受一个待排序数组，和数组元素个数
		// 每次传入a数组一个区间的起始地址，并控制a数组最后一段区间排序为正确的个数表示
		InsertSort(a + i, i + insetGap < n ? insetGap : n - i);
	}
	for (int gap = insetGap; gap < n; gap *= 2)
	{
		int begin1 = 0, end1 = 0;
		int begin2 = 0, end2 = 0;
		for (int i = 0; i < n; i += 2 * gap)
		{
			begin1 = i;
			end1 = i + gap - 1;
			begin2 = i + gap;
			end2 = i + 2 * gap - 1;
			// 如果begin2不存在，则说明归并的第二段区间不存在
			// 第一段已为有序区间，不用归并，结束本次gap间隔的两两归并
			if (begin2 >= n)
			{
				break;
			}
			// 到这里说明第二代区间存在，那么第二代区间结束条件
			// 需要控制在有效范围
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			// 将需要归并的两端区间，交给归并函数
			MergeArray(a, begin1, end1, begin2, end2, tmp);
		}
	}
	free(tmp);
}
void createDirectory(const char* dirName)
{
	// 创建子目录存放分割出的文件
	// 若失败且错误码不是EEXIST（目录已存在），才报错退出。
	if (_mkdir("sub") != 0 && errno != EEXIST) {
		printf("无法创建sub目录！失败原因：%s\n", strerror(errno));
		exit(-1);
	}
}
// 将数组内容写入sub目录下的子文件
void writeFile(int* arr, int size, int* partNumber)
{
	// 创建文件夹（如果没有的话）
	createDirectory("sub");

	char subFileName[30];
	sprintf(subFileName, "sub\\dataSegment%d.txt", (*partNumber)++);

	FILE* outputFilePtr = fopen(subFileName, "w");
	if (outputFilePtr == NULL)
	{
		printf("子文件打开失败！失败原因：%s\n", strerror(errno));
		exit(-1);
	}
	for (int i = 0; i < size; ++i)
	{
		fprintf(outputFilePtr, "%d\n", arr[i]);
	}
	fclose(outputFilePtr); // 关闭文件，将缓冲区内容写入；
}
// 归并排序实现（外排）
char* MergeSortFile(const char* file)
{
	assert(file);
	// 先打开数据文件
	FILE* inputFilePtr = fopen(file, "r");
	if (inputFilePtr == NULL)
	{
		printf("子文件打开失败！失败原因：%s\n", strerror(errno));
		exit(-1);
	}

	int gap = 10; // 将数据分割成 n / gap 份
	int num = 0;
	int* arr = (int*)malloc(sizeof(int) * gap);
	assert(arr);
	int size = 0;
	int partNumber = 0; // 每个子文件的名字后缀
	// 分gap间距，读取数据文件，放到数组中，并在内存中完成排序
	// 排序后将结果写入子文件
	for (int i = 0; fscanf(inputFilePtr, "%d\n", &num) != EOF; ++i)
	{
		if (i < gap - 1)
		{
			arr[size++] = num;
		}
		else
		{
			arr[size++] = num;
			QuickSort(arr, 0, size - 1);

			writeFile(arr, size, &partNumber);
			i = -1, size = 0;
		}
	}
	// 处理最后一段数据（如果有）
	if (size != 0)
	{
		QuickSort(arr, 0, size - 1);
		writeFile(arr, size, &partNumber);
	}
	free(arr);
	// 检查是什么原因结束的数据文件读取
	if (feof(inputFilePtr))
	{
		printf("数据文件读取完毕！\n");
	}
	else if (ferror(inputFilePtr))
	{
		printf("数据文件读取错误而结束！\n");
	}
	fclose(inputFilePtr);

	// 将 partNumber 份文件进行归并排序
	createDirectory("sub"); // 创建文件夹（如果没有的话）
	char* tmpFileName = "sub\\tmpFile.txt";
	char* fileName = (char*)malloc(sizeof(char) * 30);
	for (int i = 0; i < partNumber; ++i) // 总共有partNumber个数据文件需要归并
	{
		FILE* tmpFilePtr = fopen(tmpFileName, "w"); // 临时存储文件归并结果
		if (tmpFilePtr == NULL) printf("tmpFilePtr文件打开失败！原因：%s", strerror(errno));

		// 打开第i号文件
		sprintf(fileName, "sub\\dataSegment%d.txt", i);
		FILE* inputFilePtr1 = fopen(fileName, "r");
		if (inputFilePtr1 == NULL) printf("第%d号文件打开失败！原因：%s", i, strerror(errno));

		// 打开第i+1号文件
		sprintf(fileName, "sub\\dataSegment%d.txt", i + 1);
		FILE* inputFilePtr2 = fopen(fileName, "r");
		if (inputFilePtr2 == NULL)
		{
			if (i == partNumber - 1)
			{
				FILE* inputFilePtr1 = fopen(fileName, "w");
				if (inputFilePtr1 == NULL) printf("第%d号文件打开失败！原因：%s", i, strerror(errno));
			}
			else
			{
				printf("第%d号文件打开失败！原因：%s", i + 1, strerror(errno));

			}
		}

		int num1, num2;
		int ret1 = fscanf(inputFilePtr1, "%d\n", &num1) != EOF;
		int ret2 = fscanf(inputFilePtr2, "%d\n", &num2) != EOF;
		// 归并两个文件的数据
		while (ret1 && ret2)
		{
			if (num1 < num2)
			{
				fprintf(tmpFilePtr, "%d\n", num1);
				ret1 = fscanf(inputFilePtr1, "%d\n", &num1) != EOF;
			}
			else
			{
				fprintf(tmpFilePtr, "%d\n", num2);
				ret2 = fscanf(inputFilePtr2, "%d\n", &num2) != EOF;
			}
		}
		// 将还有剩余数据的文件内容继续写入
		if (ret1)
		{
			fprintf(tmpFilePtr, "%d\n", num1);
			while (fscanf(inputFilePtr1, "%d\n", &num1) != EOF)
				fprintf(tmpFilePtr, "%d\n", num1);
		}
		if (ret2)
		{
			fprintf(tmpFilePtr, "%d\n", num2);
			while (fscanf(inputFilePtr2, "%d\n", &num2) != EOF)
				fprintf(tmpFilePtr, "%d\n", num2);
		}
		// 检查是有读取失败的结束
		if (ferror(inputFilePtr1))
		{
			printf("%s的前一个文件未正常读取结束", fileName);
		}
		if (ferror(inputFilePtr1))
		{
			printf("%s文件未正常读取结束", fileName);
		}
		fclose(inputFilePtr1);
		fclose(inputFilePtr2); // 关闭，待会要以“w模式”写入归并好的数据
		fclose(tmpFilePtr); // 关闭，将缓冲区内容写入

		// 只读模式打开刚才写好的临时数据文件
		tmpFilePtr = fopen(tmpFileName, "r"); 
		if (tmpFilePtr == NULL) printf("tmpFilePtr文件打开失败！原因：%s", strerror(errno));

		// 写入当前循环的“i + 1”号目标文件，
		// 这个文件将作为下次循环的，inputFilePtr1被打开，用于下次归并
		inputFilePtr2 = fopen(fileName, "w"); 
		if (inputFilePtr2 == NULL) printf("第%d号文件打开失败！原因：%s", i + 1, strerror(errno));

		// 将临时文件的内容写回原“i + 1”号文件
		int num3;
		while (fscanf(tmpFilePtr, "%d\n", &num3) != EOF)
		{
			fprintf(inputFilePtr2, "%d\n", num3);
		}
		// 关闭两个文件
		fclose(tmpFilePtr); // 下次循环将以“w”模式打开，里面内容会被消除，无脏数据
		fclose(inputFilePtr2); // 缓冲区的内容将被真正写入
	}
	return fileName;
}

// 计数排序
void CountSort(int* a, int n)
{
	assert(a);
	if (n <= 1)
		return;

	int maxValue = a[0];
	int minValue = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > maxValue)
			maxValue = a[i];
		if (a[i] < minValue)
			minValue = a[i];
	}
	int size = maxValue - minValue + 1;
	int* tmpArr = (int*)malloc(sizeof(int) * size);
	assert(tmpArr);
	memset(tmpArr, 0, sizeof(int) * size);
	for (int i = 0, index = 0; i < n; ++i)
	{
		index = a[i] - minValue;
		++tmpArr[index];
	}
	for (int i = 0, index = 0; i < size; ++i)
	{
		while (tmpArr[i] != 0)
		{
			a[index++] = i + minValue;
			--tmpArr[i];
		}
	}
	free(tmpArr);
}