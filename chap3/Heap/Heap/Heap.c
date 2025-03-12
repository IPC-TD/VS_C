#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"

// ��ʼ����
void HeapInit(Heap* php)
{
	assert(php);
	php->_arr = (HPDataType*)malloc(sizeof(HPDataType) * HEAP_CAPASITY_INIT_MAX);
	assert(php->_arr);
	php->_capasity = HEAP_CAPASITY_INIT_MAX;
	php->_size = 0;
}
// ��ֵֵ����
void swap(HPDataType* s1, HPDataType* s2)
{
	HPDataType tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
// ����ʹ��ǰ����������������������������Ҫ��С��״̬��
// ����С�ѽṹ�����µ����ѵĽṹ��
void AdjustDown(HPDataType* arr, int n, int parent)
{
	assert(arr);
	// Ĭ�����Ӹ�С
	int child = parent * 2 + 1; // �Ƶ���ʽ�ó�
	while (child < n)
	{
		// �����Һ��Ӹ�С�����
		if (child + 1 < n && arr[child + 1] < arr[child])
		{
			++child;
		}
		// ������ӱȸ���С���򽻻�λ�ã�Сֵ�ϸ���
		if (arr[child] < arr[parent])
		{
			swap(&arr[child], &arr[parent]);
			// ����
			parent = child;
			child = child * 2 + 1;
		}
		else
		{
			// ��Ϊ�Ժ���Ϊ��������С�ѣ����û�и�С��ֵ�����ϸ���
			break;
		}
	}
}
// �ѵĹ�����������������ʼ���ѣ�
void HeapCreat(Heap* php, HPDataType* arr, int n)
{
	assert(php);
	// ��������
	php->_arr = (HPDataType*)malloc(sizeof(HPDataType) * n);
	assert(php->_arr);
	memmove(php->_arr, arr, sizeof(HPDataType) * n);

	// �����ѽṹ��С�ѣ�
	// ����ȫ�������������µ�2�Ƚڵ㿪ʼ���������������Ϲ����ѣ���ϻ�ͼ��⣩
	for (int parent = (n - 1 - 1) / 2; parent >= 0; --parent)
	{
		AdjustDown(php, n, parent);
	}
}
// ���ٶ�
void HeapSestroy(Heap* php)
{
	assert(php);
	free(php->_arr);
	php->_capasity;
	php->_size;
}