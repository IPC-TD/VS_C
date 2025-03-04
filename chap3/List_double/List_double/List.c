#define _CRT_SECURE_NO_WARNINGS
#include "List.h"
// ��ڵ�(ͷ�ļ���û�������������д��ͷ��������������һ�£�Ȼ����嶨��д����Ҳ�У�
ListNode* buyListNode(LTDataType x)
{
	ListNode* ret = (ListNode*)malloc(sizeof(ListNode));
	assert(ret);
	ret->next = NULL; // �����ϲ���ʼ��Ҳһ������Ϊ����ĺ����Լ���ֵ
	ret->prev = NULL; // ���ǳ�ʼ��һ��Ҳ���ϰ�ߣ�Ҳ��������Ǹ�ֵ�������ˣ�Ҳ�ȽϺ÷�������
	ret->_data = x;
	return ret;
}
// �������������ͷ���.
ListNode* ListCreate()
{
	ListNode* ret = buyListNode(0);
	ret->next = ret;
	ret->prev = ret;
	return ret;
}
// ˫������������ݽڵ�
void ListClear(ListNode* plist)
{
	assert(plist);
	ListNode* del = plist->next, * next = NULL;
	while (del != plist)
	{
		next = del->next;
		free(del);
		del = next;
	}
	plist->next = plist;
	plist->prev = plist;
}
// ˫����������
void ListDestory(ListNode* plist)
{
	if (!plist) return;
	ListClear(plist);
	free(plist);
	// ָ���Լ������ÿգ�������Щ�������Ǵ�һ��ָ�룬�ӿ�һ���Աȼۺ�
}
// ˫�������ӡ
void ListPrint(ListNode* plist)
{
	if (plist == NULL)
	{
		puts("ָ��Ϊ��");
		return;
	}
	const ListNode* cur = plist->next;
	while (cur && cur != plist) // ������˫������û��ָ��յ�
	{
		printf("%d->", cur->_data);
		cur = cur->next;
	}
	puts("NULL");
}
// ˫������β��
void ListPushBack(ListNode* plist, LTDataType x)
{
	//// ���ӵ�ָ���ϵ����������������ʾ����ã���ʡ����ʡ�Ŀռ伸�����Ժ��Բ���
	//// ���磺�ඨ���tail������ʾԭ����β�������ɶ���ǿһ�㡣
	//assert(plist);
	//ListNode* newNode = buyListNode(x);
	//newNode->next = plist;
	//newNode->prev = plist->prev;
	//plist->prev->next = newNode;
	//plist->prev = newNode;

	// ��ߴ���ĸ�����
	ListInsert(plist, x);
}
// ˫������βɾ
void ListPopBack(ListNode* plist)
{
	//assert(plist);
	//if (plist->prev == plist)return; // �����ڵ����жϣ���ֹ���ڱ�λɾ��
	//ListNode* del = plist->prev;
	//del->prev->next = plist;
	//plist->prev = del->prev;
	//free(del);

	// ��ߴ���ĸ�����
	assert(plist);
	if (plist->prev == plist) return;
	ListErase(plist->prev);
}
// ˫������ͷ��
void ListPushFront(ListNode* plist, LTDataType x)
{
	//assert(plist);
	//ListNode* newNode = buyListNode(x);
	//newNode->next = plist->next;
	//newNode->prev = plist;
	//plist->next = newNode;
	//newNode->next->prev = newNode;

	// ��ߴ���ĸ�����
	assert(plist);
	ListInsert(plist->next, x);
}
// ˫������ͷɾ
void ListPopFront(ListNode* plist)
{
	//assert(plist);
	//if (plist->prev == plist)return; // �����ڵ����жϣ���ֹ���ڱ�λɾ��
	//ListNode* del = plist->next;
	//plist->next = del->next;
	//del->next->prev = plist;
	//free(del);

	// ��ߴ���ĸ�����
	assert(plist);
	if (plist->next == plist) return;
	ListErase(plist->prev);

}
// ˫���������
ListNode* ListFind(ListNode* plist, LTDataType x)
{
	assert(plist);
	const ListNode* cur = plist->next;
	while (cur != plist)
	{
		if (cur->_data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newNode = buyListNode(x);
	newNode->next = pos;
	newNode->prev = pos->prev;
	pos->prev->next = newNode;
	pos->prev = newNode;
}
// ˫������ɾ��posλ�õĽ��
void ListErase(ListNode* pos)
{
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
}