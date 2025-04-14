#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

// ����ĺ�������Ĭ��������

// ��ӡ����
void Print(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
// ���ݽ���
void Swap(int* a, int* b)
{
	assert(a && b);
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
// ��������
void InsertSort(int* a, int n)
{
	assert(a);
	// ÿ��ѭ������a[i+1]λ�õ����ݵĲ���
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];
		// ���endλ�õ�������tmp�Ĵ�������ƶ�
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
		// ͣ����˵��end�Ѿ���-1λ�ã�����a[end]��tmpС
		// ��end + 1λ���ǣ�tmpӦ�������ȷλ��
		a[end + 1] = tmp;
	}
}

// ϣ������
void ShellSort(int* a, int n)
{
	assert(a);
	int end = 0;
	int tmp = 0;
	int gap = n;
	// ����ɴ�С�����ж�β�������Ԥ����
	// gap����1ʱ������Ԥ����Ĺ���
	while (gap > 1)
	{
		// ���ÿ����С3����Ч�ʽϸߣ��ۺϳ������Ž⣩
		// +1��֤�����һ�Σ�gapһ��Ϊ1
		// ��gap == 1 ʱ���൱��ֱ�Ӳ������򣨱�֤����
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

// ѡ������
void SelectSort(int* a, int n)
{
	assert(a);
	// ÿ�α���ѡ�����С��������
	// �ֱ�������������࣬Ȼ�������߽�
	// ������Χ��[left��right]����Ϊ������
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		// ���������С����������±�
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
		// ����С���������
		Swap(&a[left], &a[mini_i]);
		
		// �߼���������ѵģ������ֶ���ͼ���
		// ���maxԭ����leftλ�ã��ᱻ���滻��
		// ������Ҫ�ж�
		// ��ԭ�������ֵ���Ƿ񱻴�left��������mini_i��λ��
		if (&a[max_i] < &a[mini_i])
		{
			max_i = mini_i; // �������ֵλ��
		}
		// �����ֵ�ŵ��ұ�
		Swap(&a[right], &a[max_i]);

		++left;
		--right;
	}
}

// ������
// ���µ����㷨
void AdjustDwon(int* a, int n, int root)
{
	assert(a);
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		// ����Һ��Ӵ��ڣ��Ҵ������ӣ��򽻻�
		if (child + 1 < n && a[child] < a[child + 1])
		{
			++child;
		}

		// ������ӱȸ��״��򽻻�
		if (a[child] > a[parent])
		{
			Swap(&a[parent], &a[child]);
		}

		// ��������������������������ά�ֶ�����
		parent = child;
		child = parent * 2 + 1;
	}

}
// ������
void HeapSort(int* a, int n)
{
	assert(a);
	// ��������н���
	// �����һ����Ҷ�ӽڵ㣬һ��ʼ���µ�����ֱ���Ѷ�
	int parent = (n - 1 - 1) / 2; // child = n - 1��
	while (parent >= 0)
	{
		AdjustDwon(a, n, parent);
		--parent;
	}
	// ������
	for (int i = n - 1; i > 0; --i)
	{
		// ÿ��ȡ�Ѷ��������βԪ�ؽ�����
		// Ȼ���ų���β���ݣ�������Ϊ�ѵĲ���
		Swap(&a[0], &a[i]);

		// �ԶѶ����ݽ������µ���
		AdjustDwon(a, i, 0);
	}
}

// ð������
void BubbleSort(int* a, int n)
{
	assert(a);
	// ð������ÿ�˱�����һ�����ֵ�ŵ���Χβ��
	// ������Ƕ�ÿ��Ԫ�رȽϣ�����Ⱥ��Ԫ�ش��򽻻���ֱ��β��ֹͣ
	// �ܹ���Ҫ���� n - 1 ��

	// ������Ԫ�ط�Χ
	for (int end = n - 1; end > 0; --end)
	{
		// һ�˱�������һ�����ֵ����end��
		for (int i = 0; i < end; ++i)
		{
			if (a[i] > a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
			}
		}
	}
}