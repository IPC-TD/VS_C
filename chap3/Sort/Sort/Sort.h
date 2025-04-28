#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h> 
#include <windows.h> 
#include <direct.h> // Windows下使用_mkdir
#include <errno.h>

// 下面的函数，都默认排升序

// 打印数组
void Print(int* a, int n);

// 数据交换
void Swap(int* a, int* b);

// 插入排序
void InsertSort(int* a, int n);

// 希尔排序
void ShellSort(int* a, int n);

// 选择排序
void SelectSort(int* a, int n);

// 堆排序
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);

// 冒泡排序
void BubbleSort(int* a, int n);

// 快速排序
// 三数取中
int GetMidIndex(int* a, int left, int right);
// 快排分区函数（左右指针法 / hoare版本）
int PartSort1(int* a, int begin, int end);
// 快排分区函数（挖坑法）
int PartSort2(int* a, int begin, int end);
// 快排分区函数（前后指针法）
int PartSort3(int* a, int begin, int end);
// 快排函数
void QuickSort(int* a, int left, int right);

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right);

// 归并排序递归实现
void MergeSort(int* a, int n);
// 归并排序非递归实现
void MergeSortNonR(int* a, int n);

// 归并排序实现（外排）
char* MergeSortFile(const char* file);

// 计数排序
void CountSort(int* a, int n);
