#pragma once
#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include <errno.h>

//// 静态版本
//#define N 7
//typedef int SeqListDateType;
//
//typedef struct SequentialList
//{
//	SeqListDateType array[7]; // 定长数组
//	size_t size; // 有效数据个数
//}SL;

// 动态版本
typedef int SLDataType;
typedef struct SequentialList
{
	SLDataType* array; // 指向动态开辟的数组（首元素），作用等同数组名
	size_t size; // 有效数据个数
	size_t capacity; // 数组大小（容量）
}SL, SeqList; // 两个别名用哪个都行

// 打印信息
void SLPrint(SeqList* ps);

// 初始化
void SeqListInit(SeqList* ps);

// 检查容量
void CheckCapacity(SeqList* ps);

// 顺序表尾插
void SeqListPushBack(SeqList* ps, SLDataType x);

// 顺序表尾删
void SeqListPopBack(SeqList* ps);

/*
为了方便，后面的用顺序表结构体类型，用简写别名“SL”了
*/
// 顺序表头插
void SeqListPushFront(SL* ps, SLDataType x);

// 顺序表头删
void SeqListPopFront(SL* ps);