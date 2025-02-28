#define _CRT_SECURE_NO_WARNINGS
#include "List.h"

void ListTest1()
{
	ListNode* p = ListCreate();
	// β��
	ListPushBack(p, 1);
	ListPushBack(p, 2);
	ListPushBack(p, 3);
	ListPrint(p);
	// βɾ��
	ListPopBack(p);
	ListPopBack(p);
	ListPrint(p);
	ListPopBack(p);
	ListPrint(p);
	
	puts("ͷ�壺");
	ListPushFront(p, 1);
	ListPushFront(p, 2);
	ListPushFront(p, 3);
	ListPrint(p);
	puts("ͷɾ");
	ListPopFront(p);
	ListPopFront(p);
	ListPrint(p);
	ListPopFront(p);
	ListPrint(p);
}
void ListTest2()
{
	ListNode* p = ListCreate();
	// β��
	ListPushBack(p, 1);
	ListPushBack(p, 2);
	ListPushBack(p, 3);

	// ����
	ListPrint(ListFind(p, 1));
	ListPrint(ListFind(p, 2));
	ListPrint(ListFind(p, 3));
	ListPrint(ListFind(p, 111));

	// posǰ����
	ListInsert(ListFind(p, 2), 111);
	ListInsert(ListFind(p, 3), 222);
	ListInsert(ListFind(p, 1), 6666);
	ListInsert(p, 3333);
	ListPrint(p);

	// posλ��ɾ��
	ListErase(ListFind(p, 6666));
	ListErase(ListFind(p, 111));
	ListErase(ListFind(p, 3333));
	ListErase(ListFind(p, 222));
	ListPrint(p);
	ListDestory(p);
}

int main()
{
	// ListTest1();
	ListTest2();
	return 0;
}