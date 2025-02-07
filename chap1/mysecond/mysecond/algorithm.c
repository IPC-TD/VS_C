#define _CRT_SECURE_NO_WARNINGS
#include <malloc.h>
#include <stdio.h>
#include <assert.h>

//typedef int SListDataType;
//
//typedef struct SListNode
//{
//	SListDataType data;
//	struct SListNode* next;
//}SListNode;
//
//SListNode* CreateSListNode(int x)
//{
//	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
//	assert(newNode);
//	newNode->data = x;
//	newNode->next = NULL;
//	return newNode;
//}
//
//void SListPushBack(SListNode** pphead, SListDataType x)
//{
//	assert(pphead);
//	SListNode* newNode = CreateSListNode(x);
//	
//	if (*pphead == NULL)
//	{
//		*pphead = newNode;
//	}
//	else
//	{
//		SListNode* tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//		tail->next = newNode;
//	}
//	
//}
//
//void SListPrint(SListNode** pphead)
//{
//	assert(pphead);
//	SListNode* cur = *pphead;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//}
//
//void TextSListNode()
//{
//	SListNode* pList = NULL;
//	SListPushBack(&pList, 1);
//	SListPushBack(&pList, 2);
//	SListPushBack(&pList, 3);
//	SListPrint(&pList);
//}
//
//void TextPrint(void)
//{
//	SListNode* p = NULL;
//	printf("%x\n", p);
//	printf("%x", &p);
//}
//
//int main()
//{
//	//TextPrint();
//	TextSListNode();
//	return 0;
//}

int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int k2 = 0;
    for (int i = 0; i < numSize; i++)
    {
        k2 = k2 * 10 + num[i];
    }
    int ret = k2 + k;
    int count = 1;
    int tmp = ret;
    while (tmp /= 10)
    {
        count++;
    }
    num = (int*)realloc(num, count * 4);
    assert(num);
    *returnSize = count;
    for (int i = count - 1; i >= 0; i--)
    {
        num[i] = ret % 10;
        ret /= 10;
    }
    return num;
}

int main()
{
    int* arr = (int*)malloc(sizeof(int) * 3);
    if (arr == NULL)
    {
        exit(1);
    }
    arr[0] = 2, arr[1] = 7, arr[2] = 4;
    int k = 181;
    int returnSize = 0;
    arr = addToArrayForm(arr, 3, k, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}