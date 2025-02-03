#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void TestSeqList1(void)
{
	SeqList s;
	SeqListInit(&s);
	// β׷��
	SeqListPushBack(&s, 0);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SLPrint(&s);

	SeqListPushBack(&s, 4);
	SLPrint(&s);

	// βɾ��
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SLPrint(&s);

	// ͷ����
	SeqListPushFront(&s, -1);
	SLPrint(&s);

	// ͷɾ��
	SeqListPopFront(&s);
	SLPrint(&s);

	// ���У�0123
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SLPrint(&s);
	// ��1��2֮�����
	SeqListInsert(&s, 2, 4);
	// ��ͷ�ͽ�β����
	SeqListInsert(&s, 0, -1);
	SeqListInsert(&s, s.size, -1);
	SLPrint(&s);
	
	// ɾ��ָ��λ��
	SeqListErase(&s, s.size - 1);
	SeqListErase(&s, 0);
	SLPrint(&s);

	SeqListErase(&s, 2);
	SLPrint(&s);

	// ����ֵ
	printf("%d\n", SeqListFind(&s, 2));
	printf("%d\n", SeqListFind(&s, 4));
	printf("%d\n", SeqListFind(&s, 9));

	// ����
	SeqListDestroy(&s);
	// ���ٺ��Է���
	SeqListPushBack(&s, 0);
	

}
void Testif(void)
{
	;
}
int main()
{
	TestSeqList1();
	Testif();
	return 0;
}