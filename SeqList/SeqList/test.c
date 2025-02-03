#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void TestSeqList1(void)
{
	SeqList s;
	SeqListInit(&s);
	// 尾追加
	SeqListPushBack(&s, 0);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SLPrint(&s);

	SeqListPushBack(&s, 4);
	SLPrint(&s);

	// 尾删除
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SLPrint(&s);

	// 头插入
	SeqListPushFront(&s, -1);
	SLPrint(&s);

	// 头删除
	SeqListPopFront(&s);
	SLPrint(&s);

	// 序列：0123
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SLPrint(&s);
	// 在1和2之间插入
	SeqListInsert(&s, 2, 4);
	// 开头和结尾插入
	SeqListInsert(&s, 0, -1);
	SeqListInsert(&s, s.size, -1);
	SLPrint(&s);
	
	// 删除指定位置
	SeqListErase(&s, s.size - 1);
	SeqListErase(&s, 0);
	SLPrint(&s);

	SeqListErase(&s, 2);
	SLPrint(&s);

	// 查找值
	printf("%d\n", SeqListFind(&s, 2));
	printf("%d\n", SeqListFind(&s, 4));
	printf("%d\n", SeqListFind(&s, 9));

	// 销毁
	SeqListDestroy(&s);
	// 销毁后尝试访问
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