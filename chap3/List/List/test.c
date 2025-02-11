#define _CRT_SECURE_NO_WARNINGS
#include "SingleList.h"
void TestSList1(void)
{
	SListNode* plist = NULL;
	// 尾插
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPrint(plist); // 1->2->3->NULL

	// 尾删
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist); // 1->NULL

	SListPopBack(&plist);
	SListPrint(plist); // 链表为空！

	SListPopBack(&plist); //链表为空！

	// 头插
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPrint(plist); // 3->2->1->NULL

	// 头删
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist); // 1->NULL

	SListPopFront(&plist);
	SListPopFront(&plist); // 链表为空！
}
void TestSList2(void)
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);

	// 查找
	// pos后插入
	SListInsertAfter(plist, 10);
	SListInsertAfter(SListFind(plist, 2), 20);
	SListInsertAfter(SListFind(plist, 3), 30);
	SListPrint(plist); // 1->10->2->20->3->30->NULL
	// pos后删除
	SListEraseAfter(SListFind(plist, 1));
	SListEraseAfter(SListFind(plist, 2));
	SListEraseAfter(SListFind(plist, 3));
	SListPrint(plist);

	// 其他情况
	SListFind(plist, 111); // 找不到！
	SListFind(NULL, 1); // 列表为空！
	SListInsertAfter(NULL, 111); // pos为空

	SListEraseAfter(SListFind(plist, 3)); 
	SListPrint(plist); // 1->2->3->NULL

	SListEraseAfter(NULL); // pos为空

}
int main()
{
	// TestSList1();
	TestSList2();
	return 0;
}