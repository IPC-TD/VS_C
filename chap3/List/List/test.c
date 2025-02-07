#define _CRT_SECURE_NO_WARNINGS
#include "SingleList.h"
void TestSListNode(void)
{
	SListNode* plist = NULL;
	// β��
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPrint(plist);

	// βɾ
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);

	// ͷ��
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPrint(plist);

	// ͷɾ
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPopFront(&plist);

	// posλ��֮�����
	printf("\n");
	puts("posλ��֮�����:");
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
	SListInsertAfter(&plist, 5, 4);// ʧ��
	SListInsertAfter(&plist, 4, 4);
	SListPrint(plist);// 0->-1->1->2->3->4->NULL

	// ����
	puts("");
	SListFind(plist, 10);
	SListNode* ret = SListFind(plist, 0);
	SListPrint(ret);

	SListPrint(SListFind(plist, -1));
	SListPrint(SListFind(plist, 5));
	SListPrint(SListFind(plist, 3));

	// posλ��֮��ɾ��
	// ��ǰ����0->-1->1->2->3->4->NULL
	printf("\n");
	SListEraseAfter(&plist, -2); //������Χ
	SListEraseAfter(&plist, -1);
	SListPrint(plist); // -1->1->2->3->4->NULL

	SListEraseAfter(&plist, 0);
	SListPrint(plist); // -1->2->3->4->NULL
	SListEraseAfter(&plist, -1);// 2->3->4->NULL

	SListEraseAfter(&plist, 5); // �����Ȳ�����
	SListEraseAfter(&plist, 2); // 2��data = 4)֮���λ��Ϊ��
	SListEraseAfter(&plist, 1); // βɾ

	SListPrint(plist); // 2->3->NULL


}
int main()
{
	TestSListNode();
	return 0;
}