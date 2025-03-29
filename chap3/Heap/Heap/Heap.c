#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"

// ��ʼ����
void HeapInit(Heap* php)
{
	assert(php);
	php->_arr = NULL;
	php->_capacity = 0;
	php->_size = 0;
}
// ��ֵ����
void swap(HPDataType* s1, HPDataType* s2)
{
	HPDataType tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
// ����ʹ��ǰ����������������������������Ҫ��С��״̬��
// ����С�ѽṹ�����µ����ѵĽṹ��
void AdjustDown(HPDataType* arr, int n, int root) // adjust / ??d??st / vt. У׼��������ʹ���ʺ�
{
	assert(arr);
	// Ĭ�����Ӹ�С
	int parent = root;
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
	php->_size = php->_capacity =  n;
	php->_arr = (HPDataType*)malloc(sizeof(HPDataType) * n);
	assert(php->_arr);
	memmove(php->_arr, arr, sizeof(HPDataType) * n);

	// �����ѽṹ��С�ѣ�
	// ����ȫ�������������µ�2�Ƚڵ㿪ʼ�����������һ����Ҷ�ӽڵ㿪ʼ�������������Ϲ����ѣ���ϻ�ͼ��⣩
	for (int parent = (n - 1 - 1) / 2; parent >= 0; --parent)
	{
		AdjustDown(php->_arr, n, parent);
	}
}
// ���ٶ�
void HeapDestroy(Heap* php)
{
	assert(php);
	free(php->_arr);
	php->_arr = NULL;
	php->_capacity = php->_size = 0;
}
// ��ӡ
void HeapPrint(Heap* php)
{
	assert(php);
	for (int i = 0; i < php->_size; ++i)
	{
		printf("%d  ", php->_arr[i]);
	}
	printf("\n");
}
// �ѵĲ���
void HeapPush(Heap* php, HPDataType x)
{
	assert(php);
	// ����Ƿ���Ҫ����
	if (php->_size == php->_capacity)
	{
		php->_capacity *= 2;
		HPDataType* tmp = (HPDataType*)realloc(php->_arr, sizeof(HPDataType) * php->_capacity);
		assert(tmp);
		php->_arr = tmp;
	}
	// ��β����
	php->_arr[php->_size] = x;
	++php->_size;
	// ���ϵ��������ֶѵ����ʣ�С�ѣ�
	int child = php->_size - 1;
	int parent = (child - 1) / 2;
	while (child > 0) // �״�㣺����ø�ĸ����жϣ���child = 0ʱ������� parent = ��0 -1��/ 2 = 0��
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
// �ѵ�ɾ����ɾ�Ѷ����ݣ�
void HeapPop(Heap* php)
{
	assert(php);
	assert(!HeapEmpty(php)); // ��ֹ��Ϊ��
	// ���Ѷ��������β���ݽ����� ���ڶ�βɾ��
	swap(&php->_arr[0], &php->_arr[php->_size - 1]);
	--php->_size;
	// �Ե������ĶѶ����ݽ������µ���
	AdjustDown(php->_arr, php->_size, 0);
}
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* php)
{
	assert(php && !HeapEmpty(php));
	return php->_arr[0];
}
// �ѵ����ݸ���
int HeapSize(Heap* php)
{
	assert(php);
	return php->_size;
}
// �ѵ��п�
int HeapEmpty(Heap* php)
{
	assert(php);
	return php->_size ? 0 : 1;
}