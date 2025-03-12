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

// 初始化堆
void HeapInit(Heap* php);
// 堆的构建（传入数组来初始化堆）
void HeapCreat(Heap* php, HPDataType* arr, int n);
// 函数使用前提条件：跟的左右两个子树，都要是小堆状态。
// 构建小堆结构（向下调整堆的结构）
void AdjustDown(HPDataType* arr, int n, int parent);
// 数值值交换
void swap(HPDataType* s1, HPDataType* s2);
// 销毁堆
void HeapSestroy(Heap* php);