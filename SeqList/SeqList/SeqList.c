#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

// 打印信息
void SLPrint(SL* ps)
{
	assert(ps);
	// 检查是否为已销毁顺序表
	CHECK_CAPACITY_DESTROY(ps);
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
	// 检查是否为已销毁顺序表
	CHECK_CAPACITY_DESTROY(ps);

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
	// 检查是否为已销毁顺序表
	CHECK_CAPACITY_DESTROY(ps);
	CheckCapacity(ps);
	ps->array[ps->size] = x;
	ps->size++;
}

// 顺序表尾删
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	// 检查是否为已销毁顺序表
	CHECK_CAPACITY_DESTROY(ps);
	ps->size--;
}

/*
为了方便，后面的用顺序表结构体类型，用简写别名“SL”了
*/

// 顺序表头插
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	// 检查是否为已销毁顺序表
	CHECK_CAPACITY_DESTROY(ps);

	CheckCapacity(ps);
	int SLend = ps->size - 1;
	for ( ; SLend >= 0; --SLend)
	{
		ps->array[SLend + 1] = ps->array[SLend];
	}
	ps->array[0] = x;
	ps->size++;
}
// 顺序表头删
void SeqListPopFront(SL* ps)
{
	assert(ps);
	// 检查是否为已销毁顺序表
	CHECK_CAPACITY_DESTROY(ps);

	for (int i = 0; i < ps->size - 1; ++i)
	{
		ps->array[i] = ps->array[i + 1];
	}
	ps->size--;
}

// 顺序表在pos位置插入x
void SeqListInsert(SL* ps, size_t pos, SLDataType x)
{
	assert(ps);
	// 检查是否为已销毁顺序表
	CHECK_CAPACITY_DESTROY(ps);

	CheckCapacity(ps);
	if (pos > ps->size)
	{
		printf("超出可插入的范围\n");
		return;
	}
	//// 两个不同类型的操作数，发生了隐式类型转换,用int会被转化成unsigned int
	//// 可以用long类型解决
	//for (int end = ps->size - 1; end >= pos; --end)
	//{
	//	ps->array[end + 1] = ps->array[end];
	//}
	
	// 或者改变条件，指向移动移动后位置
	for (int end = ps->size; end > pos; --end)
	{
		ps->array[end] = ps->array[end - 1];
	}
	ps->array[pos] = x;
	ps->size++;
}

// 顺序表删除pos位置的值
void SeqListErase(SL* ps, size_t pos)
{
	assert(ps);
	// 检查是否为已销毁顺序表
	CHECK_CAPACITY_DESTROY(ps);

	if (pos > ps->size - 1)
	{
		printf("超出可删除范围\n");
		return;
	}
	for (int start = pos; start < ps->size - 1; ++start)
	{
		ps->array[start] = ps->array[start + 1];
	}
	ps->size--;
}

// 顺序表查找
int SeqListFind(SL* ps, SLDataType x)
{
	assert(ps);
	// 检查是否为已销毁顺序表
	CHECK_CAPACITY_DESTROY(ps);

	// 如果后续要查找多个值，用结构体放回
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->array[i] == x)
		{
			return i;
		}
	}
	return EOF;
}

// 顺序表销毁
void SeqListDestroy(SL* ps)
{
	assert(ps);
	free(ps->array);
	ps->array = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
