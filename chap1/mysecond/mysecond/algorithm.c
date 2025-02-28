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

//// �˷����������ڳ������ļ���
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

//int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
//    assert(num);
//    if (k > 0)
//    {
//        // ͳ��kλ��
//        int count = 0;
//        int tmp = k;
//        while (tmp > 0)
//        {
//            count++;
//            tmp /= 10;
//        }
//        // ����num���鵽�ʺϵĴ�С
//        int num_end = 0;
//        if (count >= numSize)
//        {
//            int* tmp_p = (int*)realloc(num, sizeof(int) * (count + 1));
//            assert(tmp_p);
//            num = tmp_p;
//            num_end = count;
//        }
//        else
//        {
//            num = (int*)realloc(num, sizeof(int) * (numSize + 1));
//            assert(num);
//            num_end = numSize;
//        }
//        // ����Ч�����ƶ���ĩβ
//        tmp = num_end;
//        for (int cur = numSize - 1; cur >= 0; --cur)
//        {
//            num[tmp] = num[cur];
//            tmp--;
//        }
//        // ����λ����
//        while (tmp >= 0)
//        {
//            num[tmp] = 0;
//            tmp--;
//        }
//        // ��ʼ�ӷ�����
//        int index = num_end;
//        int carry = 0;
//        int digit;
//        while (k > 0)
//        {
//            digit = k % 10;
//            k /= 10;
//            tmp = digit + num[index] + carry;
//            carry = 0;
//            if (tmp >= 10)
//            {
//                num[index] = tmp - 10;
//                carry = 1;
//            }
//            else
//            {
//                num[index] = tmp;
//            }
//            index--;
//        }
//        // ����ʣ�����
//        while (carry != 0)
//        {
//            num[index] += carry;
//            carry = 0;
//            if (num[index] >= 10)
//            {
//                carry = 1;
//                num[index] -= 10;
//            }
//            index--;
//        }
//        // ��Ч����ǰ��
//        int num_start = 0;
//        while (num[num_start] == 0 && num_start <= num_end)
//        {
//            num_start++;
//        }
//        int new_num_end = 0;
//        index = num_start;
//        while (index <= num_end)
//        {
//            num[new_num_end] = num[index];
//            new_num_end++;
//            index++;
//        }
//        *returnSize = new_num_end;
//        return num;
//    }
//    else
//    {
//        *returnSize = numSize;
//        return num;
//    }
//}
//// ������������������
//int* positiveIntegerDigitToArray(size_t k, int* arrSize)
//{
//    assert(arrSize);
//    // ͳ��λ��
//    size_t count = 0;
//    size_t tmp = k;
//    while (tmp > 0)
//    {
//        count++;
//        tmp /= 10;
//    }
//    *arrSize = count;
//    // �����ڴ�
//    int* ret = (int*)malloc(count * sizeof(int));
//    assert(ret);
//    // �������
//    int cur = count - 1;
//    while (cur >= 0)
//    {
//        ret[cur] = k % 10;
//        k /= 10;
//        cur--;
//    }
//    return ret;
//}
//
//int main()
//{
//    int arrSize = 0;
//    int* arr = positiveIntegerDigitToArray(1200, &arrSize);
//    int k = 34;
//    int returnSize = 0;
//    arr = addToArrayForm(arr, arrSize, k, &returnSize);
//    for (int i = 0; i < returnSize; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    free(arr);
//    return 0;
//}


//// ������ĿDebug
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//
//// ��ڵ�
//struct ListNode* BuyListNode(int x)
//{
//    struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (ret)
//    {
//        ret->val = x;
//        ret->next = NULL;
//        return ret;
//    }
//}
//// β��
//void ListPushBack(struct ListNode** head, int x)
//{
//    assert(head);
//    if (*head == NULL)
//    {
//        *head = BuyListNode(x);
//    }
//    else
//    {
//        struct ListNode* cur = *head;
//        while (cur->next)
//        {
//            cur = cur->next;
//        }
//        cur->next = BuyListNode(x);
//    }
//}
//// ��ӡ����
//void ListPrint(struct ListNode* head)
//{
//    if (NULL == head)
//    {
//        puts("����Ϊ�գ�");
//    }
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        printf("%d->", cur->val);
//        cur = cur->next;
//    }
//    printf("NULL\n");
//}
// ����206����ת��ĿDebug
// ��ָ��ڵ㷽����ת�ⷨ
// struct ListNode* reverseList(struct ListNode* head) {
//     // ����Ϊ��
//     // ����һ���ڵ���߶���ڵ�
//     if (NULL == head)
//     {
//         return head;
//     }
//     else
//     {
//         // ��¼��һ���ڵ�ָ�룬Ȼ��ָ����һ���ڵ�
//         // ������һ���ڵ��ظ�������ֱ����������β
//         struct ListNode* cur = head;
//         struct ListNode* frontCur = NULL;
//         struct ListNode* nextCur = NULL;
//         while (cur)
//         {
//             nextCur = cur->next;
//             cur->next = frontCur;
//             frontCur = cur;
//             cur = nextCur;
//         }
//         return frontCur;
//     }

// }
//// ����206����ת��ĿDebug
//// ����ͷ��ⷨ(��ת����)
//struct ListNode* reverseList(struct ListNode* head) {
//    // ����Ϊ�ջ���ֻ��һ���ڵ�
//    if (head == NULL || head->next == NULL) // ���жϿգ����жϺ��棬head->next�����
//    {
//        return head;
//    }
//    // ��ڵ����
//    // struct ListNode* cur = head->next;
//    // struct ListNode* next = NULL;
//    // head->next = NULL;
//    // while (cur)
//    // {
//    //     next = cur->next;
//    //     cur->next = head;
//    //     head = cur;
//    //     cur = next;
//    // }
//    // ͬ����˼·�����ֵķ��������治���ж�ҲҲ����
//    struct ListNode* cur = head;
//    struct ListNode* next = NULL;
//    struct ListNode* newhead = NULL;
//    while (cur)
//    {
//        next = cur->next;
//        cur->next = newhead;
//        newhead = cur;
//        cur = next;
//    }
//    return newhead;
//}

// ����206����ת��ĿDebug
// // ���Եݹ�ⷨ(��ת����)
// struct ListNode* reverseList(struct ListNode* head) {
//     // ����Ϊ��
//     // ����һ���ڵ���߶���ڵ�
//     if (NULL == head)
//     {
//         return head;
//     }
//     else if (head->next == NULL)
//     {
//         return head;
//     }
//     else
//     {
//         // �ݹ��ս�������ʲô��ÿ�ε����Ƿ�Խ��Խ�ӽ�����������
//         // ��������β
//         // ����βָ����һ���ڵ�
//         // ����������β��ַ
//         // ��������ͷָ���
//         struct ListNode* cur = head;
//         struct ListNode* front = NULL;
//         while (cur->next)
//         {
//             front = cur;
//             cur = cur->next;
//         } 
//         front->next = NULL;
//         cur->next = reverseList(head);
//         return cur;
//     }

// }
// 
//// ����203�Ƴ�����Ԫ����ĿDebug
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    // ����ͷ��
//    struct ListNode* newhead = head;
//    while (newhead && newhead->val == val)
//    {
//        // struct ListNode* del = newhead;// ����Ƕ�̬���ٵ�,׼���ͷ�
//        newhead = newhead->next;
//        // free(del);
//    }
//    if (newhead == NULL)
//    {
//        return NULL;
//    }
//    // ����ͷ����Ľڵ�
//    struct ListNode* cur = newhead;
//    struct ListNode* next = NULL;
//    while (cur)
//    {
//        next = cur->next;
//        while (next && (next->val == val))
//        {
//            // struct ListNode* del = next;// ����Ƕ�̬���ٵ�,׼���ͷ�
//            next = next->next;
//            // free(del);
//        }
//        cur->next = next;
//        cur = next;
//    }
//    return newhead;
//}
//
//int main()
//{
//    struct ListNode* plist = NULL;
//    ListPushBack(&plist, 1);
//    ListPushBack(&plist, 2);
//    ListPushBack(&plist, 6);
//    ListPushBack(&plist, 3);
//    ListPushBack(&plist, 4);
//    ListPushBack(&plist, 5);
//    ListPushBack(&plist, 6);
//    ListPrint(plist);
//
//    
//    ListPrint(removeElements(plist, 6));
//
//    return 0;
//}


//typedef struct ListNode
//{
//    int val;
//    struct ListNode* m_pNext;
//}ListNode;
//
///*
//����������
//3
//1 2 3
//1
//Ԥ�������3
//8
//1 2 3 4 5 6 7 8
//4
//Ԥ�������5
//*/
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n))
//    {
//        // ����ֵ������������
//        ListNode* head = NULL;
//        ListNode* cur = head;
//        for (int i = 0; i < n; i++)
//        {
//            if (cur == NULL)
//            {
//                ListNode* ret = (ListNode*)malloc(sizeof(ListNode));
//                assert(ret);
//                head = ret;
//                cur = head;
//                scanf("%d", &(cur->val));
//                cur->m_pNext = NULL;
//            }
//            else
//            {
//                ListNode* ret = (ListNode*)malloc(sizeof(ListNode));
//                assert(ret);
//                cur->m_pNext = ret;
//                cur = ret;
//                cur->m_pNext = NULL;
//                scanf("%d", &(cur->val));
//            }
//        }
//        // �����Ҳ�֪������Ľڵ�����������k���ڵ��ֵ
//        cur = head; // ��ָ��fast
//        ListNode* target = head;// ��ָ��slow
//        int count = 0;
//        int k = 0;
//        scanf("%d", &k);
//        // ��ǰ��������˼·�ǣ��ȿ��ƿ���ָ������k����Ȼ��һ����
//        while (cur)
//        {
//            count++;// ��ǰfast(cur)Ϊ�ڼ����ڵ�
//            if (count > k)
//            {
//                target = target->m_pNext;
//            }
//            cur = cur->m_pNext;
//        }
//        if (count < k)
//        {
//            return NULL;
//        }
//        else
//        {
//            printf("%d\n", target->val);
//        }
//        // �ڴ��ͷ�
//        cur = head;
//        for (int i = 0; i < n; i++)
//        {
//            ListNode* next = cur->m_pNext;
//            free(cur);
//            cur = next;
//        }
//    }
//    return 0;
//}

///*
//* ����989. ������ʽ�������ӷ�
//1 <= num.length <= 10��4�η�
//0 <= num[i] <= 9
//num �������κ�ǰ���㣬�����㱾��
//1 <= k <= 104
//*/
//int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
//{
//	// ��ǰC�������й̶���С�����޷����գ�10��4�η�λ��������
//	// ����޷���������������ȡ�����м��㡣
//	// ������ô�ͳ���Ƽӷ�������num���������ÿһλ
//	
//	// ����k��λ��
//	int count = 0;
//	int tmp_k = k;
//	while (tmp_k)
//	{
//		tmp_k /= 10;
//		count++;
//	}
//	// �ж�num��k˭��λ���࣬������num����
//	// ��С�ڵ����Լ�������λ���������һλ
//	int newNumSize = numSize > count ? (numSize + 1) : (count + 1);
//	int* ret = (int*)realloc(num, sizeof(int) * newNumSize);
//	if (NULL == ret)
//	{
//		exit(1);
//	}
//	num = ret;
//	// ��Чλ����
//	for (int i = numSize - 1, new_i = newNumSize - 1; i >= 0; --i, --new_i)
//	{
//		num[new_i] = num[i];
//	}
//	// ��Чλ����
//	for (int i = 0; i < newNumSize - numSize; ++i)
//	{
//		num[i] = 0;
//	}
//	// ��num������Сλ����λ���
//	int carry = 0; // ����λ
//	for (int i = newNumSize - 1; i >= 0; --i)
//	{
//		num[i] = num[i] + (k % 10) + carry;
//		carry = 0;
//		k /= 10;
//		if (num[i] > 9)
//		{
//			carry = 1;
//			num[i] -= 10;
//		}
//	}
//	// �Ƴ���λ0�����
//	if (0 == num[0])
//	{
//		for (int new_i = 0, i = 1; i < newNumSize; ++i, ++new_i)
//		{
//			num[new_i] = num[i];
//		}
//		newNumSize--;
//	}
//	*returnSize = newNumSize;
//	return num;
//
//}
//void test(void)
//{
//	// ����������
//	int* num = (int*)calloc(4, sizeof(int));
//	if (num)
//	{
//		num[0] = 1, num[1] = 2, num[2] = 0, num[3] = 0;
//	}
//	int k = 34;
//	int returnSize = 0; // ����Ͳ���
//	// �������{1, 2, 3, 4};
//	
//	// ����ʵ�֣�addToArrayForm����
//	int* ret = addToArrayForm(num, 4, k, &returnSize);
//}
//int main()
//{
//	test();
//	return 0;
//}

