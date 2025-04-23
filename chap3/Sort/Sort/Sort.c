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
//// 快排分区函数（左右指针法 / hoare版本）（调试排查用）
//int PartSort1(int* a, int begin, int end) {
//	assert(a);
//	int key = end;
//	int left = begin;
//	int right = end - 1;  // 从end-1开始扫描，避免key自身干扰
//
//	while (left < right) {
//		// 从左找第一个大于a[key]的元素
//		while (left < right && a[left] <= a[key]) ++left;
//		// 从右找第一个小于a[key]的元素
//		while (left < right && a[right] >= a[key]) --right;
//		Swap(&a[left], &a[right]);
//	}
//
//	// 最终left==right，检查是否需要交换key
//	if (a[left] > a[key]) {
//		Swap(&a[left], &a[key]);
//		return left;
//	}
//	else {
//		// 如果左侧元素均小于key，key无需移动
//		return key;
//	}
//}
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
//// 快速排序 非递归实现（可用）
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

// 快速排序 非递归实现（问题已经排除，此代码逻辑正常，疑似此前栈代码中，扩容存在问题）
// 现在应该重点排查为什么大数据量时（数组大小1000000），range元素的的pop出栈或者push压入栈有问题
void QuickSortNonR(int* a, int left, int right)
{
	if (right <= left)
		return;

	Stack s;
	StackInit(&s);

	Range r = { left, right };
	StackPush(&s, (Range) { left, right });

	// 这里的第二个参数，没有使用结构体变量r
	// 而是使用“复合字面量”，创建了一个匿名结构体对象，C99起支持
	// StackPush(&s, (Range) { left, right });

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
			Range r1 = { r._left, divided - 1 };
			Range r2 = { divided + 1, r._right };
			//printf("入栈数据1：%d %d\n", r1._left, r1._right);
			//printf("入栈数据2：%d %d\n", r2._left, r2._right);
			//Sleep(100);
			//StackPush(&s, (Range) { r._left, divided - 1 }); // C99起支持
			//StackPush(&s, (Range) { divided + 1, r._right }); // C99起支持
			StackPush(&s, r2); 
			StackPush(&s, r1);
		}
		else
		{
			InsertSort(a + r._left, r._right - r._left + 1);
		}
	}
	StackDestroy(&s);
}

////（调试排查用）
//void QuickSortNonR(int* a, int left, int right) {
//	if (right <= left) return;
//
//	Stack s;
//	StackInit(&s);
//	StackPush(&s, (Range) { left, right });
//
//	while (!StackEmpty(&s)) {
//		Range r = StackTop(&s);
//		StackPop(&s);
//
//		if (r._left >= r._right) continue;
//
//		// 小区间使用插入排序优化
//		if (r._right - r._left <= 10) {
//			InsertSort(a + r._left, r._right - r._left + 1);
//			continue;
//		}
//
//		// 三数取中优化
//		int mid = GetMidIndex(a, r._left, r._right);
//		Swap(&a[r._right], &a[mid]);
//
//		int divided = PartSort1(a, r._left, r._right);
//
//		// 确保divided在合法范围内 [r._left, r._right-1]
//		if (divided >= r._right) divided = r._right - 1;
//		if (divided <= r._left) divided = r._left;
//
//		Range r1 = { r._left, divided - 1 };
//		Range r2 = { divided + 1, r._right };
//
//		// 压栈顺序：先右后左，减少栈深度
//		if (r2._left < r2._right) StackPush(&s, r2);
//		if (r1._left < r1._right) StackPush(&s, r1);
//	}
//	StackDestroy(&s);
//}