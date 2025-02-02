#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

// ��ӡ��Ϣ
void SLPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}

// ��ʼ��
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

// �������
void CheckCapacity(SeqList* ps)
{
	assert(ps);
	if (ps->capacity <= ps->size)
	{
		/*
		��������Խ�����ݴ��ۣ�����Ǩ�ƿ�����Խ��
		���ÿ������Ϊԭ��2���ȽϺ�������˷�50%�ռ�
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

// ˳���β��׷��
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	assert(ps);
	CheckCapacity(ps);
	ps->array[ps->size] = x;
	ps->size++;
}

// ˳���βɾ
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	ps->size--;
}

/*
Ϊ�˷��㣬�������˳���ṹ�����ͣ��ü�д������SL����
*/

// ˳���ͷ��
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
// ˳���ͷɾ
void SeqListPopFront(SL* ps);