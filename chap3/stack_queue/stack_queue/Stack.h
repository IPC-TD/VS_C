#pragma once
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#define STACK_INIT_CAPACITY 10

typedef int STDataType;
/*
#define N 10
// 静态版本
typedef struct Stack
{
	STDataType _arr[N];
	int _top;      // 栈顶
}Stack;
*/

// 动态栈
typedef struct Stack
{
	STDataType* _arr;
	int _top;      // 栈顶
	int _capacity; // 容量
}Stack;

// 初始化
void StackInit(Stack* ps);
// 销毁
void StackDestroy(Stack* ps);
// 入栈
void StackPush(Stack* ps, STDataType x);
// 出栈
void StackPop(Stack* ps);
// 获取栈中有效元素个数 
int StackSize(Stack* ps);
// 获取栈顶元素
STDataType StackTop(Stack* ps);
// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps);
// 检查是否需要扩容
void CheckCapacity(Stack* ps);

