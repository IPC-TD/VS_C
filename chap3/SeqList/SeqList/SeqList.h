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

// 顺序表尾删，（pop，在计算机领域，常用来表示删除的意思）
void SeqListPopBack(SeqList* ps);

/*
为了方便，后面的用顺序表结构体类型，用简写别名“SL”了
*/
// 顺序表头插
void SeqListPushFront(SL* ps, SLDataType x);

// 顺序表头删
void SeqListPopFront(SL* ps);

// 顺序表在pos位置插入x，（position位置：/p??z??n/）
void SeqListInsert(SL* ps, size_t pos, SLDataType x);

// 顺序表删除pos位置的值
void SeqListErase(SL* ps, size_t pos);

// 顺序表查找
int SeqListFind(SL* ps, SLDataType x);

// 顺序表销毁
void SeqListDestroy(SL* ps);


// 检查顺序表是否已经销毁
#define CHECK_CAPACITY_DESTROY(PS) \
if ((PS)->capacity == 0)\
{\
	printf("该顺序表可能已销毁，容量为0\n"); \
	return;\
}\
else{}

