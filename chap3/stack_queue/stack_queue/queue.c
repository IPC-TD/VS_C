#define _CRT_SECURE_NO_WARNINGS
#include "Queue.h"

// ��ʼ������
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_head = pq->_tail = NULL;
}
// ���ٶ���
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QueueNode* next = NULL;
	while (pq->_head)
	{
		next = pq->_head->_next;
		free(pq->_head);
		pq->_head = next;
	}
	pq->_tail = NULL;
}
// ��β����� 
void QueuePush(Queue* pq, STDataType x)
{
	assert(pq);
	QueueNode* ret = (QueueNode*)malloc(sizeof(QueueNode));
	if (ret == NULL)
	{
		puts("�ڴ治��");
		exit(-1);
	}
	ret->_data = x;
	ret->_next = NULL;
	if (pq->_tail == NULL)
	{
		pq->_head = pq->_tail = ret;
	}
	else
	{
		pq->_tail->_next = ret;
		pq->_tail = ret;
	}
}
// ��ͷ����
void QueuePop(Queue* pq)
{
	assert(pq);
	if (pq->_head != pq->_tail)
	{
		QueueNode* del = pq->_head;
		pq->_head = pq->_head->_next;
		free(del);
	}
	else
	{
		free(pq->_head);
		pq->_head = pq->_tail = NULL;
	}
}
// ��ȡ����ͷ��Ԫ��
STDataType QueueFront(Queue* pq)
{
	assert(pq && pq->_head);
	return pq->_head->_data;
}
// ��ȡ����β��Ԫ��
STDataType QueueBack(Queue* pq)
{
	assert(pq && pq->_tail);
	return pq->_tail->_data;
}
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0
int QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->_head == NULL ? 1 : 0;
}
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->_head;
	int ret = 0;
	while (cur)
	{
		++ret;
		cur = cur->_next;
	}
	return ret;
}