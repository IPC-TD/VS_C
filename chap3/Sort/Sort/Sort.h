#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

// ����ĺ�������Ĭ��������

// ��ӡ����
void Print(int* a, int n);

// ���ݽ���
void Swap(int* a, int* b);

// ��������
void InsertSort(int* a, int n);

// ϣ������
void ShellSort(int* a, int n);

// ѡ������
void SelectSort(int* a, int n);

// ������
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);

// ð������
void BubbleSort(int* a, int n);

// ��������
void QuickSort(int* a, int left, int right);