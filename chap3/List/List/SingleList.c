#define _CRT_SECURE_NO_WARNINGS
#include "SingleList.h"

// �������
SListNode* BuySListNode(SLDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == newNode)
	{
		printf("����������ʧ��");
		exit(1);
	}
	else
	{
		newNode->data = x;
		newNode->next = NULL;
		return newNode;
	}
}

// �������ӡ
void SListPrint(SListNode* phead)
{
	if (phead == NULL)
	{
		printf("����Ϊ�գ�\n");
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

// ������β��
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

// ������ͷ��
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
		
		// ���м�
		SListNode* ret = BuySListNode(x);
		ret->next = *pplist;
		*pplist = ret;
	}
}

// ������βɾ
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	// ����Ϊ��
	if (*pplist == NULL)
	{
		printf("����Ϊ�գ�\n");
		return;
	}
	else
	{
		SListNode* cur = *pplist;
		// ֻ��һ�����
		if (cur->next == NULL)
		{
			free(*pplist);
			*pplist = NULL;
			return;
		}
		else
		{
			// �ж�����
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

// ������ͷɾ
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("����Ϊ�գ�\n");
		return;
	}
	else
	{
		SListNode* TwoSListNode = (*pplist)->next;
		free(*pplist);
		*pplist = TwoSListNode;
	}
}

// ���������
SListNode* SListFind(SListNode* plist, SingleListDataType x)
{
	if (NULL == plist)
	{
		printf("�б�Ϊ�գ�\n");
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
			printf("�Ҳ�����\n");
			return NULL;
		}
	}
}

//// ��������posλ��֮�����x
//// ����˼��Ϊʲô����posλ��֮ǰ���룿
//// ��Ŀ�����ˣ���˸�ʵ�ַ���
//void SListInsertAfter(SListNode** pplist, int pos, int x)
//{
//	assert(pplist);
//	if (pos < -1)
//	{
//		printf("�����ɲ��뷶Χ\n");
//		return;
//	}
//	else
//	{
//		SListNode* cur = *pplist;
//		// �ж������Ƿ�Ϊ��
//		if (NULL == cur)
//		{
//			if (-1 == pos)
//			{
//				*pplist = BuySListNode(x);
//			}
//			else
//			{
//				printf("�����Ȳ������޷����룡\n");
//			}
//		}
//		// ��Ϊ�����
//		else
//		{
//			// Ѱ��posλ��
//			if (-1 == pos)
//			{
//				SListNode* cur = *pplist;
//				*pplist = BuySListNode(x);
//				(*pplist)->next = cur;
//			}
//			// count���䵱ǰ����λ��
//			int count = 0;
//			while (NULL != cur->next && count < pos)
//			{
//				cur = cur->next;
//				count++;
//			}
//			// ������posλ�õ����
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
//			// �����Ȳ��������
//			else
//			{
//				printf("�����Ȳ������޷����룡\n");
//			}
//		}
//	}
//}

 // ��������posλ��֮�����x
 // ����˼��Ϊʲô����posλ��֮ǰ���룿���𰸣�Ϊ�˽ӽ�����ѧϰ�����ݣ�SQL�ṩ�Ľӿ��������ģ�
void SListInsertAfter(SListNode* pos, SingleListDataType x)
{
	// posΪ�մ���
	// pos��β����pos��Ϊβ�������½������β���Ͳ����û���𣬿��Ժϲ�����
	if (NULL == pos)
	{
		puts("posΪ��");
		return;
	}
	else
	{
		SListNode* ret = BuySListNode(x);
		ret->next = pos->next;
		pos->next = ret;
	}
}

//// ������ɾ��posλ��֮���ֵ
//// ����˼��Ϊʲô��ɾ��posλ�ã�
//// ��Ŀ�����ˣ���˸�ʵ�ַ���
//void SListEraseAfter(SListNode** pplist, int pos)
//{
//	assert(pplist);
//	SListNode* cur = *pplist;
//	if (NULL == cur)
//	{
//		printf("�б�Ϊ�գ�\n");
//		return;
//	}
//	else
//	{
//		if (pos < -1)
//		{
//			printf("���ڷ�Χ�ڣ�\n");
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
//			// Ѱ�������е�posλ��
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
//					printf("����pos֮���λ��Ϊ�գ�\n");
//					return;
//				}
//			}
//			else
//			{
//				printf("�����Ȳ�����\n");
//				return;
//			}
//
//		}
//	}
//}

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã���ͬ��
void SListEraseAfter(SListNode* pos)
{
	// Ϊ��
	// pos��Ϊ�գ��벻Ϊ��
	if (NULL == pos)
	{
		puts("posΪ��");
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

