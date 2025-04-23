#define _CRT_SECURE_NO_WARNINGS
#include "Stack.h"

// ��ʼ��
void StackInit(Stack* ps)
{
	assert(ps);
	// �����޸ģ������������Ԫ�ش�С�Ŀռ䣬����ջ�ṹ���С�Ŀռ�
	ps->_arr = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}
// ����
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_arr);
	ps->_arr = NULL;
	ps->_top = 0;
	ps->_capacity = 0;
}
// ����Ƿ���Ҫ����
void CheckCapacity(Stack* ps)
{
	assert(ps);
	if (ps->_capacity > ps->_top) return;
	ps->_capacity = ++(ps->_capacity) * 2; // ��һ��ʵ��������*2�����������޸�ջ��������Ա
	// �����޸ģ������������Ԫ�ش�С�Ŀռ䣬����ջ�ṹ���С�Ŀռ�
	STDataType* ret = (STDataType*)realloc(ps->_arr, sizeof(STDataType) * ps->_capacity);
	assert(ret);
	ps->_arr = ret;
}
// ��ջ
void StackPush(Stack* ps, STDataType x)
{
	assert(ps);
	CheckCapacity(ps); // ֻ����ջ����Ҫ�������ݣ���д�ɵ����ĺ���Ҳ��
	ps->_arr[ps->_top] = x;
	ps->_top += 1;
}
// ��ջ
void StackPop(Stack* ps)
{
	assert(!StackEmpty(ps));
	ps->_top -= 1;
}
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}
// ��ȡջ��Ԫ��
STDataType StackTop(Stack* ps)
{
	assert(!StackEmpty(ps));
	return ps->_arr[ps->_top - 1];
}
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps)
{
	assert(ps);
	//if (ps->_top == 0)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return 0;
	//}
	// ��һЩ������д��
	return ps->_top == 0 ? 1 : 0; // �����Ƽ�
	//return !ps->_top;
}