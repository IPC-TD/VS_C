#pragma once
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
typedef int STDataType;

// ��ʽ�ṹ����ʾ����
typedef struct QueueNode
{
	struct QueueNode* _next;
	STDataType _data;
}QueueNode;

// ���еĽṹ
typedef struct Queue
{
	struct QueueNode* _head;
	struct QueueNode* _tail;
}Queue;

// ��ʼ������
void QueueInit(Queue* pq);
// ���ٶ���
void QueueDestroy(Queue* pq);
// ��β����� 
void QueuePush(Queue* pq, STDataType x);
// ��ͷ����
void QueuePop(Queue* pq);
// ��ȡ����ͷ��Ԫ��
STDataType QueueFront(Queue* pq);
// ��ȡ����β��Ԫ��
STDataType QueueBack(Queue* pq);
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0
int QueueEmpty(Queue* pq);
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* pq);








