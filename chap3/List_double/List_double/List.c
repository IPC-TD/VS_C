#define _CRT_SECURE_NO_WARNINGS
#include "List.h"
// 买节点(头文件我没包含这个，所以写在头。或者这里声明一下，然后具体定义写后面也行）
ListNode* buyListNode(LTDataType x)
{
	ListNode* ret = (ListNode*)malloc(sizeof(ListNode));
	assert(ret);
	ret->next = NULL; // 理论上不初始化也一样，因为后面的函数自己赋值
	ret->prev = NULL; // 但是初始化一下也算好习惯，也许后面忘记赋值，崩溃了，也比较好发现问题
	ret->_data = x;
	return ret;
}
// 创建返回链表的头结点.
ListNode* ListCreate()
{
	ListNode* ret = buyListNode(0);
	ret->next = ret;
	ret->prev = ret;
	return ret;
}
// 双向链表清除数据节点
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
// 双向链表销毁
void ListDestory(ListNode* plist)
{
	if (!plist) return;
	ListClear(plist);
	free(plist);
	// 指针自己外面置空，这样这些函数都是传一级指针，接口一致性比价好
}
// 双向链表打印
void ListPrint(ListNode* plist)
{
	if (plist == NULL)
	{
		puts("指针为空");
		return;
	}
	const ListNode* cur = plist->next;
	while (cur && cur != plist) // 理论上双向链表没有指向空的
	{
		printf("%d->", cur->_data);
		cur = cur->next;
	}
	puts("NULL");
}
// 双向链表尾插
void ListPushBack(ListNode* plist, LTDataType x)
{
	//// 复杂的指针关系，定义多个变量来表示会更好，节省变量省的空间几乎可以忽略不计
	//// 例如：多定义个tail，来表示原来的尾，这样可读性强一点。
	//assert(plist);
	//ListNode* newNode = buyListNode(x);
	//newNode->next = plist;
	//newNode->prev = plist->prev;
	//plist->prev->next = newNode;
	//plist->prev = newNode;

	// 提高代码的复用性
	ListInsert(plist, x);
}
// 双向链表尾删
void ListPopBack(ListNode* plist)
{
	//assert(plist);
	//if (plist->prev == plist)return; // 新增节点数判断，防止把哨兵位删了
	//ListNode* del = plist->prev;
	//del->prev->next = plist;
	//plist->prev = del->prev;
	//free(del);

	// 提高代码的复用性
	assert(plist);
	if (plist->prev == plist) return;
	ListErase(plist->prev);
}
// 双向链表头插
void ListPushFront(ListNode* plist, LTDataType x)
{
	//assert(plist);
	//ListNode* newNode = buyListNode(x);
	//newNode->next = plist->next;
	//newNode->prev = plist;
	//plist->next = newNode;
	//newNode->next->prev = newNode;

	// 提高代码的复用性
	assert(plist);
	ListInsert(plist->next, x);
}
// 双向链表头删
void ListPopFront(ListNode* plist)
{
	//assert(plist);
	//if (plist->prev == plist)return; // 新增节点数判断，防止把哨兵位删了
	//ListNode* del = plist->next;
	//plist->next = del->next;
	//del->next->prev = plist;
	//free(del);

	// 提高代码的复用性
	assert(plist);
	if (plist->next == plist) return;
	ListErase(plist->prev);

}
// 双向链表查找
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
// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newNode = buyListNode(x);
	newNode->next = pos;
	newNode->prev = pos->prev;
	pos->prev->next = newNode;
	pos->prev = newNode;
}
// 双向链表删除pos位置的结点
void ListErase(ListNode* pos)
{
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
}