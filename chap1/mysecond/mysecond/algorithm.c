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

//// 此方法不适用于超大数的计算
//int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
//    int k2 = 0;
//    for (int i = 0; i < numSize; i++)
//    {
//        k2 = k2 * 10 + num[i];
//    }
//    int ret = k2 + k;
//    int count = 1;
//    int tmp = ret;
//    while (tmp /= 10)
//    {
//        count++;
//    }
//    num = (int*)realloc(num, count * 4);
//    assert(num);
//    *returnSize = count;
//    for (int i = count - 1; i >= 0; i--)
//    {
//        num[i] = ret % 10;
//        ret /= 10;
//    }
//    return num;
//}
//
//int main()
//{
//    int* arr = (int*)malloc(sizeof(int) * 3);
//    if (arr == NULL)
//    {
//        exit(1);
//    }
//    arr[0] = 2, arr[1] = 7, arr[2] = 4;
//    int k = 181;
//    int returnSize = 0;
//    arr = addToArrayForm(arr, 3, k, &returnSize);
//    for (int i = 0; i < returnSize; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    free(arr);
//    return 0;
//}

int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    assert(num);
    if (k > 0)
    {
        // 统计k位数
        int count = 0;
        int tmp = k;
        while (tmp > 0)
        {
            count++;
            tmp /= 10;
        }
        // 调整num数组到适合的大小
        int num_end = 0;
        if (count >= numSize)
        {
            int* tmp_p = (int*)realloc(num, sizeof(int) * (count + 1));
            assert(tmp_p);
            num = tmp_p;
            num_end = count;
        }
        else
        {
            num = (int*)realloc(num, sizeof(int) * (numSize + 1));
            assert(num);
            num_end = numSize;
        }
        // 将有效数字移动到末尾
        tmp = num_end;
        for (int cur = numSize - 1; cur >= 0; --cur)
        {
            num[tmp] = num[cur];
            tmp--;
        }
        // 其他位置零
        while (tmp >= 0)
        {
            num[tmp] = 0;
            tmp--;
        }
        // 开始加法运算
        int index = num_end;
        int carry = 0;
        int digit;
        while (k > 0)
        {
            digit = k % 10;
            k /= 10;
            tmp = digit + num[index] + carry;
            carry = 0;
            if (tmp >= 10)
            {
                num[index] = tmp - 10;
                carry = 1;
            }
            else
            {
                num[index] = tmp;
            }
            index--;
        }
        // 处理剩余进项
        while (carry != 0)
        {
            num[index] += carry;
            carry = 0;
            if (num[index] >= 10)
            {
                carry = 1;
                num[index] -= 10;
            }
            index--;
        }
        // 有效数字前移
        int num_start = 0;
        while (num[num_start] == 0 && num_start <= num_end)
        {
            num_start++;
        }
        int new_num_end = 0;
        index = num_start;
        while (index <= num_end)
        {
            num[new_num_end] = num[index];
            new_num_end++;
            index++;
        }
        *returnSize = new_num_end;
        return num;
    }
    else
    {
        *returnSize = numSize;
        return num;
    }
}
// 产生代表整数的数组
int* positiveIntegerDigitToArray(size_t k, int* arrSize)
{
    assert(arrSize);
    // 统计位数
    size_t count = 0;
    size_t tmp = k;
    while (tmp > 0)
    {
        count++;
        tmp /= 10;
    }
    *arrSize = count;
    // 开辟内存
    int* ret = (int*)malloc(count * sizeof(int));
    assert(ret);
    // 填充数字
    int cur = count - 1;
    while (cur >= 0)
    {
        ret[cur] = k % 10;
        k /= 10;
        cur--;
    }
    return ret;
}

int main()
{
    int arrSize = 0;
    int* arr = positiveIntegerDigitToArray(1200, &arrSize);
    int k = 34;
    int returnSize = 0;
    arr = addToArrayForm(arr, arrSize, k, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
