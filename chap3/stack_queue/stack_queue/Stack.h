#pragma once
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#define STACK_INIT_CAPACITY 10

typedef int STDataType;
/*
#define N 10
// ��̬�汾
typedef struct Stack
{
	STDataType _arr[N];
	int _top;      // ջ��
}Stack;
*/

// ��̬ջ
typedef struct Stack
{
	STDataType* _arr;
	int _top;      // ջ��
	int _capacity; // ����
}Stack;

// ��ʼ��
void StackInit(Stack* ps);
// ����
void StackDestroy(Stack* ps);
// ��ջ
void StackPush(Stack* ps, STDataType x);
// ��ջ
void StackPop(Stack* ps);
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps);
// ��ȡջ��Ԫ��
STDataType StackTop(Stack* ps);
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps);
// ����Ƿ���Ҫ����
void CheckCapacity(Stack* ps);

