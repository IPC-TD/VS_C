#define _CRT_SECURE_NO_WARNINGS
#include "SingleList.h"

// 结点申请
SListNode* BuySListNode(SLDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == newNode)
	{
		printf("链表结点申请失败");
		exit(1);
	}
	else
	{
		newNode->data = x;
		newNode->next = NULL;
		return newNode;
	}
}

// 单链表打印
void SListPrint(SListNode* phead)
{
	if (phead == NULL)
	{
		printf("链表为空！\n");
	}
	else
	{
		SListNode* cur = phead;
		while (cur != NULL)
		{
			printf("%d->", cur->data);
			cur = cur->next;
		}
		printf("NULL\n");
	}
}

// 单链表尾插
void SListPushBack(SListNode** pplist, SingleListDataType x)
{
	assert(pplist);
	SListNode* cur = *pplist;
	if (NULL == cur)
	{
		*pplist = BuySListNode(x);
	}
	else
	{
		while (NULL != cur->next)
		{
			cur = cur->next;
		}
		cur->next = BuySListNode(x);
	}
}

// 单链表头插
void SListPushFront(SListNode** pplist, SingleListDataType x)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		*pplist = BuySListNode(x);
	}
	else
	{
		//SListNode* old_headNode = *pplist;
		//SListNode* ret = BuySListNode(x);
		//*pplist = ret;
		//ret->next = old_headNode;
		
		// 进行简化
		SListNode* ret = BuySListNode(x);
		ret->next = *pplist;
		*pplist = ret;
	}
}

// 单链表尾删
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	// 链表为空
	if (*pplist == NULL)
	{
		printf("链表为空！\n");
		return;
	}
	else
	{
		SListNode* cur = *pplist;
		// 只有一个结点
		if (cur->next == NULL)
		{
			free(*pplist);
			*pplist = NULL;
			return;
		}
		else
		{
			// 有多个结点
			SListNode* FrontCur = NULL;
			while (NULL != cur->next)
			{
				FrontCur = cur;
				cur = cur->next;
			}
			free(cur);
			FrontCur->next = NULL;
		}

	}
}

// 单链表头删
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("链表为空！\n");
		return;
	}
	else
	{
		SListNode* TwoSListNode = (*pplist)->next;
		free(*pplist);
		*pplist = TwoSListNode;
	}
}

// 单链表查找
SListNode* SListFind(SListNode* plist, SingleListDataType x)
{
	if (NULL == plist)
	{
		printf("列表为空！\n");
	}
	else
	{
		SListNode* cur = plist;
		while (cur->data != x && cur->next != NULL)
		{
			cur = cur->next;
		}
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			printf("找不到！\n");
			return NULL;
		}
	}
}

//// 单链表在pos位置之后插入x
//// 分析思考为什么不在pos位置之前插入？
//// 题目抄错了，因此该实现废弃
//void SListInsertAfter(SListNode** pplist, int pos, int x)
//{
//	assert(pplist);
//	if (pos < -1)
//	{
//		printf("超出可插入范围\n");
//		return;
//	}
//	else
//	{
//		SListNode* cur = *pplist;
//		// 判断链表是否为空
//		if (NULL == cur)
//		{
//			if (-1 == pos)
//			{
//				*pplist = BuySListNode(x);
//			}
//			else
//			{
//				printf("链表长度不够，无法插入！\n");
//			}
//		}
//		// 不为空情况
//		else
//		{
//			// 寻找pos位置
//			if (-1 == pos)
//			{
//				SListNode* cur = *pplist;
//				*pplist = BuySListNode(x);
//				(*pplist)->next = cur;
//			}
//			// count记忆当前链表位置
//			int count = 0;
//			while (NULL != cur->next && count < pos)
//			{
//				cur = cur->next;
//				count++;
//			}
//			// 链表有pos位置的情况
//			if (count == pos)
//			{
//				if (NULL == cur->next)
//				{
//					cur->next = BuySListNode(x);
//				}
//				else
//				{
//					SListNode* ret = BuySListNode(x);
//					SListNode* frontcur = cur;
//					cur = cur->next;
//					frontcur->next = ret;
//					ret->next = cur;
//				}
//			}
//			// 链表长度不够的情况
//			else
//			{
//				printf("链表长度不够，无法插入！\n");
//			}
//		}
//	}
//}

 // 单链表在pos位置之后插入x
 // 分析思考为什么不在pos位置之前插入？（答案：为了接近后续学习的内容，SQL提供的接口是这样的）
void SListInsertAfter(SListNode* pos, SingleListDataType x)
{
	// pos为空处理
	// pos是尾部，pos不为尾部，在新结点后插入尾链和插入空没区别，可以合并处理
	if (NULL == pos)
	{
		puts("pos为空");
		return;
	}
	else
	{
		SListNode* ret = BuySListNode(x);
		ret->next = pos->next;
		pos->next = ret;
	}
}

//// 单链表删除pos位置之后的值
//// 分析思考为什么不删除pos位置？
//// 题目抄错了，因此该实现废弃
//void SListEraseAfter(SListNode** pplist, int pos)
//{
//	assert(pplist);
//	SListNode* cur = *pplist;
//	if (NULL == cur)
//	{
//		printf("列表为空！\n");
//		return;
//	}
//	else
//	{
//		if (pos < -1)
//		{
//			printf("不在范围内！\n");
//			return;
//		}
//		else
//		{
//			if (-1 == pos)
//			{
//				SListNode* TwoSListNode = cur->next;
//				free(cur);
//				*pplist = TwoSListNode;
//				return;
//			}
//			// 寻找链表中的pos位置
//			int count = 0;
//			while (cur->next != NULL && count < pos)
//			{
//				cur = cur->next;
//				count++;
//			}
//			if (count == pos)
//			{
//				if (cur->next != NULL)
//				{
//					SListNode* CurFront = cur;
//					cur = cur->next;
//					CurFront->next = cur->next;
//					free(cur);
//					return;
//				}
//				else
//				{
//					printf("链表pos之后的位置为空！\n");
//					return;
//				}
//			}
//			else
//			{
//				printf("链表长度不够！\n");
//				return;
//			}
//
//		}
//	}
//}

// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？（同理）
void SListEraseAfter(SListNode* pos)
{
	// 为空
	// pos后为空，与不为空
	if (NULL == pos)
	{
		puts("pos为空");
		return;
	}
	else
	{
		SListNode* next = pos->next;
		SListNode* next_next = (next ? next->next : NULL);
		pos->next = next_next;
		free(next);
	}
}

