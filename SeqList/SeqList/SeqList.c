#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

// 打印信息
void SLPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}

// 初始化
void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->array = (SeqList*)malloc(sizeof(SLDataType) * 4);
	if (ps->array == NULL)
	{
		perror("SeqListInit_malloc");
		exit(1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

// 检查容量
void CheckCapacity(SeqList* ps)
{
	assert(ps);
	if (ps->capacity <= ps->size)
	{
		/*
		考虑数据越大，扩容代价（数据迁移开销）越大，
		因此每次扩容为原来2倍比较合理，最多浪费50%空间
		*/
		ps->array = (SLDataType*)realloc(ps->array, sizeof(SLDataType)*ps->capacity * 2);
		if (ps->array == NULL)
		{
			perror("SeqListPushBack_realloc");
			exit(1);
		}
		ps->capacity *= 2;
	}
}

// 顺序表尾部追加
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	assert(ps);
	CheckCapacity(ps);
	ps->array[ps->size] = x;
	ps->size++;
}

// 顺序表尾删
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
}

/*
为了方便，后面的用顺序表结构体类型，用简写别名“SL”了
*/

// 顺序表头插
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	CheckCapacity(ps);
	int SLend = ps->size - 1;
	for ( ; SLend >= 0; --SLend)
	{
		ps->array[ps->size] = ps->array[SLend];
	}
	ps->array[0] = x;
	ps->size++;
}
// 顺序表头删
void SeqListPopFront(SL* ps);