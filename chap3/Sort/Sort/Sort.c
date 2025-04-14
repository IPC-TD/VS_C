#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

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
		// Print(a, n);
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