#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"
void TestHeap()
{
	Heap hp;
	// 初始化和堆的构建
	HeapInit(&hp);
	int array[] = { 27,15,19,18,28,34,65,49,25,37 };
	HeapCreat(&hp, array, sizeof(array)/ sizeof(array[0]));
	// 输出函数
	HeapPrint(&hp);
	// 插入
	HeapPush(&hp, 1);
	HeapPush(&hp, 36);
	HeapPush(&hp, 44);
	HeapPush(&hp, 55);
	HeapPrint(&hp);
	// 数据个数
	printf("现有数据个数：%d\n", HeapSize(&hp));
	// 删除+堆顶数据获取+非空判断
	while (!HeapEmpty(&hp))
	{
		printf("%d  ", HeapTop(&hp));
		HeapPop(&hp);
	}
	// 销毁
	HeapDestroy(&hp);

}
int main()
{
	TestHeap();
	return 0;
}