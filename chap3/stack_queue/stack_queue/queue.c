#define _CRT_SECURE_NO_WARNINGS
#include "Queue.h"

// 初始化队列
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_head = pq->_tail = NULL;
}
// 销毁队列
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
// 队尾入队列 
void QueuePush(Queue* pq, STDataType x)
{
	assert(pq);
	QueueNode* ret = (QueueNode*)malloc(sizeof(QueueNode));
	if (ret == NULL)
	{
		puts("内存不足");
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
// 队头出队
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
// 获取队列头部元素
STDataType QueueFront(Queue* pq)
{
	assert(pq && pq->_head);
	return pq->_head->_data;
}
// 获取队列尾部元素
STDataType QueueBack(Queue* pq)
{
	assert(pq && pq->_tail);
	return pq->_tail->_data;
}
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0
int QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->_head == NULL ? 1 : 0;
}
// 获取队列中有效元素个数 
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