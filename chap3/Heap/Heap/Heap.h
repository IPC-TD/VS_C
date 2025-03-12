#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#define HEAP_CAPASITY_INIT_MAX 10
typedef int HPDataType;
typedef struct Heap
{
	HPDataType _arr;
	int _size;
	int _capasity;
}Heap;

// ��ʼ����
void HeapInit(Heap* php);
// �ѵĹ�����������������ʼ���ѣ�
void HeapCreat(Heap* php, HPDataType* arr, int n);
// ����ʹ��ǰ����������������������������Ҫ��С��״̬��
// ����С�ѽṹ�����µ����ѵĽṹ��
void AdjustDown(HPDataType* arr, int n, int parent);
// ��ֵֵ����
void swap(HPDataType* s1, HPDataType* s2);
// ���ٶ�
void HeapSestroy(Heap* php);