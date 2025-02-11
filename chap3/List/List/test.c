#define _CRT_SECURE_NO_WARNINGS
#include "SingleList.h"
void TestSList1(void)
{
	SListNode* plist = NULL;
	// β��
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPrint(plist); // 1->2->3->NULL

	// βɾ
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist); // 1->NULL

	SListPopBack(&plist);
	SListPrint(plist); // ����Ϊ�գ�

	SListPopBack(&plist); //����Ϊ�գ�

	// ͷ��
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPrint(plist); // 3->2->1->NULL

	// ͷɾ
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist); // 1->NULL

	SListPopFront(&plist);
	SListPopFront(&plist); // ����Ϊ�գ�
}
void TestSList2(void)
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);

	// ����
	// pos�����
	SListInsertAfter(plist, 10);
	SListInsertAfter(SListFind(plist, 2), 20);
	SListInsertAfter(SListFind(plist, 3), 30);
	SListPrint(plist); // 1->10->2->20->3->30->NULL
	// pos��ɾ��
	SListEraseAfter(SListFind(plist, 1));
	SListEraseAfter(SListFind(plist, 2));
	SListEraseAfter(SListFind(plist, 3));
	SListPrint(plist);

	// �������
	SListFind(plist, 111); // �Ҳ�����
	SListFind(NULL, 1); // �б�Ϊ�գ�
	SListInsertAfter(NULL, 111); // posΪ��

	SListEraseAfter(SListFind(plist, 3)); 
	SListPrint(plist); // 1->2->3->NULL

	SListEraseAfter(NULL); // posΪ��

}
int main()
{
	// TestSList1();
	TestSList2();
	return 0;
}