#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

// ����ĺ�������Ĭ��������

// ��ӡ����
void Print(int* arr, int n)
{
	assert(arr);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
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
		Print(a, n);
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
		int tmp = a[left];
		a[left] = a[mini_i];
		a[mini_i] = tmp;
		
		// �߼���������ѵģ������ֶ���ͼ���
		// ���maxԭ����leftλ�ã��ᱻ���滻��
		// ������Ҫ�ж�
		// ��ԭ�������ֵ���Ƿ񱻴�left��������mini_i��λ��
		if (a[max_i] < a[mini_i])
		{
			max_i = mini_i; // �������ֵλ��
		}
		// �����ֵ�ŵ��ұ�
		tmp = a[right];
		a[right] = a[max_i];
		a[max_i] = tmp;

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
			int tmp = a[parent];
			a[parent] = a[child];
			a[child] = tmp;
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
		int tmp = a[i];
		a[i] = a[0];
		a[0] = tmp;

		// �ԶѶ����ݽ������µ���
		AdjustDwon(a, i, 0);
	}
}