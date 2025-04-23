#define _CRT_SECURE_NO_WARNINGS
#include "Stack.h"
#include "Queue.h"

void TestStack1()
{
	Stack s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	printf("StackTop：%d\n", StackTop(&s));
	StackPop(&s);
	StackPush(&s, 3);
	StackPush(&s, 4);
	printf("StackSize：%d\n", StackSize(&s));
	while (StackEmpty(&s) != 1)
	{
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}
	printf("\n");
	StackDestroy(&s);

	Stack s2;
	StackInit(&s2);
	// 大数据量操作
	const int N = 1000;
	for (int i = 0; StackSize(&s2) < N; ++i)
	{
		StackPush(&s2, i);
	}
	while (!StackEmpty(&s2))
	{
		printf("%d ", StackTop(&s2));
		StackPop(&s2);
	}
}
void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	printf("%d ", QueueBack(&q));
	printf("%d ", QueueSize(&q));
	while (QueueEmpty(&q) == 0)
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	QueueDestroy(&q);
}
int main()
{
	TestStack1();
	// TestQueue();
	return 0;
}