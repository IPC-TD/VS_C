#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

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
void QuickSort(int* a, int left, int right);