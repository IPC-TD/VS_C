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

// �������
SListNode* BuySListNode(SLDataType x);

// �������ӡ
void SListPrint(SListNode* phead);

// ������β��
void SListPushBack(SListNode** pplist, SingleListDataType x);

// ������ͷ��
void SListPushFront(SListNode** pplist, SingleListDataType x);

// ������βɾ
void SListPopBack(SListNode** pplist);

// ������ͷɾ
void SListPopFront(SListNode** pplist);

// ���������
SListNode* SListFind(SListNode* plist, SingleListDataType x);

 // ��������posλ��֮�����x
 // ����˼��Ϊʲô����posλ��֮ǰ���룿���ش���Ϊ�鷳��������Ҫһ��ָ���¼ǰһ���ڵ㣿����
void SListInsertAfter(SListNode** pplist, int pos, int x);

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã���ͬ��˫ָ���¼̫�鷳����
void SListEraseAfter(SListNode** pplist, int pos);
