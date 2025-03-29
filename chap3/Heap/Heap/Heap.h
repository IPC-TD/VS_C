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

// 初始化堆
void HeapInit(Heap* php);

// 堆的构建（传入数组来初始化堆）
void HeapCreat(Heap* php, HPDataType* arr, int n);

// 函数使用前提条件：跟的左右两个子树，都要是小堆状态。
// 构建小堆结构（向下调整堆的结构）
void AdjustDown(HPDataType* arr, int n, int root);

// 数值交换
void swap(HPDataType* s1, HPDataType* s2);

// 销毁堆
void HeapDestroy(Heap* php);

// 打印
void HeapPrint(Heap* php);
// 堆的插入
void HeapPush(Heap* php, HPDataType x);
// 堆的删除（删堆顶数据）
void HeapPop(Heap* php);
// 取堆顶的数据
HPDataType HeapTop(Heap* php);
// 堆的数据个数
int HeapSize(Heap* php);
// 堆的判空
int HeapEmpty(Heap* php);