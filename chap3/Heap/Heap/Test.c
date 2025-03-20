#define _CRT_SECURE_NO_WARNINGS
#include "Heap.h"
void TestHeap()
{
	Heap hp;
	// ��ʼ���ͶѵĹ���
	HeapInit(&hp);
	int array[] = { 27,15,19,18,28,34,65,49,25,37 };
	HeapCreat(&hp, array, sizeof(array)/ sizeof(array[0]));
	// �������
	HeapPrint(&hp);
	// ����
	HeapPush(&hp, 1);
	HeapPush(&hp, 36);
	HeapPush(&hp, 44);
	HeapPush(&hp, 55);
	HeapPrint(&hp);
	// ���ݸ���
	printf("�������ݸ�����%d\n", HeapSize(&hp));
	// ɾ��+�Ѷ����ݻ�ȡ+�ǿ��ж�
	while (!HeapEmpty(&hp))
	{
		printf("%d  ", HeapTop(&hp));
		HeapPop(&hp);
	}
	// ����
	HeapDestroy(&hp);

}
int main()
{
	TestHeap();
	return 0;
}