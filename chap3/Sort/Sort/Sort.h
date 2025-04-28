#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h> 
#include <windows.h> 
#include <direct.h> // Windows��ʹ��_mkdir
#include <errno.h>

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
// ����ȡ��
int GetMidIndex(int* a, int left, int right);
// ���ŷ�������������ָ�뷨 / hoare�汾��
int PartSort1(int* a, int begin, int end);
// ���ŷ����������ڿӷ���
int PartSort2(int* a, int begin, int end);
// ���ŷ���������ǰ��ָ�뷨��
int PartSort3(int* a, int begin, int end);
// ���ź���
void QuickSort(int* a, int left, int right);

// �������� �ǵݹ�ʵ��
void QuickSortNonR(int* a, int left, int right);

// �鲢����ݹ�ʵ��
void MergeSort(int* a, int n);
// �鲢����ǵݹ�ʵ��
void MergeSortNonR(int* a, int n);

// �鲢����ʵ�֣����ţ�
char* MergeSortFile(const char* file);

// ��������
void CountSort(int* a, int n);
