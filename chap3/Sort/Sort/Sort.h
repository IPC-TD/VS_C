#pragma once
#include <stdio.h>
#include <assert.h>

// ����ĺ�������Ĭ��������

// ��ӡ����
void Print(int* arr, int n);

// ��������
void InsertSort(int* a, int n);

// ϣ������
void ShellSort(int* a, int n);

// ѡ������
void SelectSort(int* a, int n);

// ������
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);