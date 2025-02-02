#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void TestSeqList1(void)
{
	SeqList s;
	SeqListInit(&s);
	// Î²×·¼Ó
	SeqListPushBack(&s, 0);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SLPrint(&s);

	SeqListPushBack(&s, 4);
	SLPrint(&s);

	// Î²É¾³ý
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SLPrint(&s);

	// Í·²åÈë
	SeqListPushFront(&s, -1);
	SLPrint(&s);

}
int main()
{
	TestSeqList1();
	return 0;
}