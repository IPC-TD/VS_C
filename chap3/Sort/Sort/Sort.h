#pragma once
#include <stdio.h>
#include <assert.h>

// 下面的函数，都默认排升序

// 打印数组
void Print(int* arr, int n);

// 插入排序
void InsertSort(int* a, int n);

// 希尔排序
void ShellSort(int* a, int n);

// 选择排序
void SelectSort(int* a, int n);

// 堆排序
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);