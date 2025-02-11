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
 // ����˼��Ϊʲô����posλ��֮ǰ���룿���𰸣�Ϊ�˽ӽ�����ѧϰ�����ݣ�SQL�ṩ�Ľӿ��������ģ�
// void SListInsertAfter(SListNode** pplist, int pos, int x); // ԭ��������Ŀ������
void SListInsertAfter(SListNode* pos, SingleListDataType x);

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�(ͬ��
// void SListEraseAfter(SListNode** pplist, int pos); // ԭ��������Ŀ������
void SListEraseAfter(SListNode* pos);
