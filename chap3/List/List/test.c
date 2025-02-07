#define _CRT_SECURE_NO_WARNINGS
#include "SingleList.h"
void TestSListNode(void)
{
	SListNode* plist = NULL;
	// 尾插
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPrint(plist);

	// 尾删
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);

	// 头插
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPrint(plist);

	// 头删
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPopFront(&plist);

	// pos位置之后插入
	printf("\n");
	puts("pos位置之后插入:");
	SListInsertAfter(&plist, 0, 1); // plist = NULL;
	SListInsertAfter(&plist, -2, 1);
	SListInsertAfter(&plist, -1, 1);
	SListPrint(plist); // 1->NULL

	SListInsertAfter(&plist, 1, 2);
	SListInsertAfter(&plist, 0, 2);
	SListInsertAfter(&plist, 1, 3);
	SListPrint(plist);// 1->2->3->NULL

	SListInsertAfter(&plist, -1, 0);
	SListPrint(plist);// 0->1->2->3->NULL
	SListInsertAfter(&plist, 0, -1);
	SListPrint(plist);// 0->-1->1->2->3->NULL
	SListInsertAfter(&plist, 5, 4);// 失败
	SListInsertAfter(&plist, 4, 4);
	SListPrint(plist);// 0->-1->1->2->3->4->NULL

	// 查找
	puts("");
	SListFind(plist, 10);
	SListNode* ret = SListFind(plist, 0);
	SListPrint(ret);

	SListPrint(SListFind(plist, -1));
	SListPrint(SListFind(plist, 5));
	SListPrint(SListFind(plist, 3));

	// pos位置之后删除
	// 当前链表：0->-1->1->2->3->4->NULL
	printf("\n");
	SListEraseAfter(&plist, -2); //超过范围
	SListEraseAfter(&plist, -1);
	SListPrint(plist); // -1->1->2->3->4->NULL

	SListEraseAfter(&plist, 0);
	SListPrint(plist); // -1->2->3->4->NULL
	SListEraseAfter(&plist, -1);// 2->3->4->NULL

	SListEraseAfter(&plist, 5); // 链表长度不够！
	SListEraseAfter(&plist, 2); // 2（data = 4)之后的位置为空
	SListEraseAfter(&plist, 1); // 尾删

	SListPrint(plist); // 2->3->NULL


}
int main()
{
	TestSListNode();
	return 0;
}