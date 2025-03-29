#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _arr;
	int _size;
	int _capacity;
}Heap;

// ��ʼ����
void HeapInit(Heap* php);

// �ѵĹ�����������������ʼ���ѣ�
void HeapCreat(Heap* php, HPDataType* arr, int n);

// ����ʹ��ǰ����������������������������Ҫ��С��״̬��
// ����С�ѽṹ�����µ����ѵĽṹ��
void AdjustDown(HPDataType* arr, int n, int root);

// ��ֵ����
void swap(HPDataType* s1, HPDataType* s2);

// ���ٶ�
void HeapDestroy(Heap* php);

// ��ӡ
void HeapPrint(Heap* php);
// �ѵĲ���
void HeapPush(Heap* php, HPDataType x);
// �ѵ�ɾ����ɾ�Ѷ����ݣ�
void HeapPop(Heap* php);
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* php);
// �ѵ����ݸ���
int HeapSize(Heap* php);
// �ѵ��п�
int HeapEmpty(Heap* php);