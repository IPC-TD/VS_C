#pragma once
#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdlib.h>

typedef int SingleListDataType, SLDataType;
typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SListNode;

// 结点申请
SListNode* BuySListNode(SLDataType x);

// 单链表打印
void SListPrint(SListNode* phead);

// 单链表尾插
void SListPushBack(SListNode** pplist, SingleListDataType x);

// 单链表头插
void SListPushFront(SListNode** pplist, SingleListDataType x);

// 单链表尾删
void SListPopBack(SListNode** pplist);

// 单链表头删
void SListPopFront(SListNode** pplist);

// 单链表查找
SListNode* SListFind(SListNode* plist, SingleListDataType x);

 // 单链表在pos位置之后插入x
 // 分析思考为什么不在pos位置之前插入？（回答：因为麻烦？？，还要一个指针记录前一个节点？？）
void SListInsertAfter(SListNode** pplist, int pos, int x);

// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？（同理，双指针记录太麻烦？）
void SListEraseAfter(SListNode** pplist, int pos);
