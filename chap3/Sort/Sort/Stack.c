#define _CRT_SECURE_NO_WARNINGS

#include "Stack.h"

// 初始化
void StackInit(Stack* ps)
{
	assert(ps);
	// 错误修改，申请的是数据元素大小的空间，不是栈结构体大小的空间
	ps->_arr = (STDataType*)malloc(sizeof(STDataType) * STACK_INIT_CAPACITY);
	ps->_capacity = STACK_INIT_CAPACITY;
	ps->_top = 0;
}
// 销毁
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_arr);
	ps->_arr = NULL;
	ps->_top = 0;
	ps->_capacity = 0;
}
// 检查是否需要扩容
void CheckCapacity(Stack* ps)
{
	assert(ps && ps->_arr);
	if (ps->_capacity > ps->_top) return;
	// 错误修改，申请的是数据元素大小的空间，不是栈结构体大小的空间
	STDataType* ret = (STDataType*)realloc(ps->_arr, sizeof(STDataType) * ps->_capacity * 2);
	assert(ret);
	ps->_arr = ret;
}
// 入栈
void StackPush(Stack* ps, STDataType x)
{
	assert(ps && ps->_arr);
	CheckCapacity(ps); // 只有入栈才需要考虑增容，不写成单独的函数也行
	ps->_arr[ps->_top] = x;
	ps->_top += 1;
}
// 出栈
void StackPop(Stack* ps)
{
	assert(ps && ps->_top > 0  &&ps->_arr);
	ps->_top -= 1;
}
// 获取栈中有效元素个数 
int StackSize(Stack* ps)
{
	assert(ps && ps->_arr);
	return ps->_top;
}
// 获取栈顶元素
STDataType StackTop(Stack* ps)
{
	assert(ps && ps->_arr);
	assert(ps->_top > 0);
	return ps->_arr[ps->_top - 1];
}
// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps)
{
	assert(ps && ps->_arr);
	//if (ps->_top == 0)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return 0;
	//}
	// 另一些更简洁的写法
	return ps->_top == 0 ? 1 : 0; // 课堂推荐
	//return !ps->_top;
}