#define _CRT_SECURE_NO_WARNINGS
#include "Stack.h"
#include "Queue.h"

void TestStack1()
{
	Stack s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	printf("%d ", StackTop(&s));
	StackPop(&s);
	StackPush(&s, 3);
	StackPush(&s, 4);
	printf("%d ", StackSize(&s));
	while (StackEmpty(&s) != 1)
	{
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}
	StackDestroy(&s);

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
	// TestStack1();
	TestQueue();
	return 0;
}