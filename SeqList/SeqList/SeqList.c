#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

// ��ӡ��Ϣ
void SLPrint(SL* ps)
{
	assert(ps);
	// ����Ƿ�Ϊ������˳���
	CHECK_CAPACITY_DESTROY(ps);
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
	// ����Ƿ�Ϊ������˳���
	CHECK_CAPACITY_DESTROY(ps);

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
	// ����Ƿ�Ϊ������˳���
	CHECK_CAPACITY_DESTROY(ps);
	CheckCapacity(ps);
	ps->array[ps->size] = x;
	ps->size++;
}

// ˳���βɾ
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	// ����Ƿ�Ϊ������˳���
	CHECK_CAPACITY_DESTROY(ps);
	ps->size--;
}

/*
Ϊ�˷��㣬�������˳���ṹ�����ͣ��ü�д������SL����
*/

// ˳���ͷ��
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	// ����Ƿ�Ϊ������˳���
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
// ˳���ͷɾ
void SeqListPopFront(SL* ps)
{
	assert(ps);
	// ����Ƿ�Ϊ������˳���
	CHECK_CAPACITY_DESTROY(ps);

	for (int i = 0; i < ps->size - 1; ++i)
	{
		ps->array[i] = ps->array[i + 1];
	}
	ps->size--;
}

// ˳�����posλ�ò���x
void SeqListInsert(SL* ps, size_t pos, SLDataType x)
{
	assert(ps);
	// ����Ƿ�Ϊ������˳���
	CHECK_CAPACITY_DESTROY(ps);

	CheckCapacity(ps);
	if (pos > ps->size)
	{
		printf("�����ɲ���ķ�Χ\n");
		return;
	}
	//// ������ͬ���͵Ĳ���������������ʽ����ת��,��int�ᱻת����unsigned int
	//// ������long���ͽ��
	//for (int end = ps->size - 1; end >= pos; --end)
	//{
	//	ps->array[end + 1] = ps->array[end];
	//}
	
	// ���߸ı�������ָ���ƶ��ƶ���λ��
	for (int end = ps->size; end > pos; --end)
	{
		ps->array[end] = ps->array[end - 1];
	}
	ps->array[pos] = x;
	ps->size++;
}

// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SL* ps, size_t pos)
{
	assert(ps);
	// ����Ƿ�Ϊ������˳���
	CHECK_CAPACITY_DESTROY(ps);

	if (pos > ps->size - 1)
	{
		printf("������ɾ����Χ\n");
		return;
	}
	for (int start = pos; start < ps->size - 1; ++start)
	{
		ps->array[start] = ps->array[start + 1];
	}
	ps->size--;
}

// ˳������
int SeqListFind(SL* ps, SLDataType x)
{
	assert(ps);
	// ����Ƿ�Ϊ������˳���
	CHECK_CAPACITY_DESTROY(ps);

	// �������Ҫ���Ҷ��ֵ���ýṹ��Ż�
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->array[i] == x)
		{
			return i;
		}
	}
	return EOF;
}

// ˳�������
void SeqListDestroy(SL* ps)
{
	assert(ps);
	free(ps->array);
	ps->array = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
