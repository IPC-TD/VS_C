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

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//// ���µ����㷨(С�ѣ�
//void AdjustDown(int* arr, int n, int root)
//{
//    assert(arr);
//    int parent = root;
//    int child = parent * 2 + 1;
//    while (child < n)
//    {
//        // �����һ�����Ӹ�С
//        if (child + 1 < n && arr[child] > arr[child + 1])
//        {
//            ++child;
//        }
//        // Сֵ�ϸ�
//        if (arr[parent] > arr[child])
//        {
//            int tmp = arr[parent];
//            arr[parent] = arr[child];
//            arr[child] = tmp;
//
//            parent = child;
//            child = child * 2 + 1;
//        }
//        else
//        {
//            break;
//        }
//    }
//}
//// ����ǰk��Ԫ��
//void PrintTopK(int* a, int n, int k)
//{
//    assert(a);
//    // 1. ����--��a��ǰk��Ԫ�ؽ���
//    int* topArray = (int*)malloc(sizeof(int) * k);
//    assert(topArray);
//    for (int i = 0; i < k; ++i)
//    {
//        topArray[i] = a[i];
//    }
//    for (int i = (k - 1) / 2; i >= 0; --i) // ����
//    {
//        AdjustDown(topArray, k, i);
//    }
//    // 2. ��ʣ��n-k��Ԫ��������Ѷ�Ԫ�ؽ��������������滻
//    for (int i = k; i < n; ++i)
//    {
//        if (a[i] > topArray[0])
//        {
//            topArray[0] = a[i];
//            // ���µ���Ϊ�ѽṹ
//            AdjustDown(topArray, k, 0);
//        }
//    }
//    // ��ӡ
//    for (int i = 0; i < k; ++i)
//    {
//        printf("%d  ", topArray[i]);
//    }
//}
//
//void TestTopk()
//{
//    int n = 10000;
//    int* a = (int*)malloc(sizeof(int) * n);
//    srand(time(0));
//    for (size_t i = 0; i < n; ++i)
//    {
//        a[i] = rand() % 1000000;
//    }
//    a[5] = 1000000 + 1;
//    a[1231] = 1000000 + 2;
//    a[531] = 1000000 + 3;
//    a[5121] = 1000000 + 4;
//    a[115] = 1000000 + 5;
//    a[2335] = 1000000 + 6;
//    a[9999] = 1000000 + 7;
//    a[76] = 1000000 + 8;
//    a[423] = 1000000 + 9;
//    a[3144] = 1000000 + 10;
//    PrintTopK(a, n, 10);
//}
//int main()
//{
//    TestTopk();
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* pa = NULL;
//
//	// ÿ��++���ң��ߵ�ַ��ƫ��1��int��С
//	for (pa = &arr[0]; pa != &arr[10]; ++pa)
//	{
//		printf("%d ", *pa);
//	}
//	return 0;
//}


//#include <stdio.h>
//// ������������
//int* createSortedArray(int x)
//{
//	if (x <= 0) return NULL;
//	int* ret = (int*)malloc(sizeof(int) * x);
//	assert(ret);
//	for (int i = 0; i < x; ++i)
//	{
//		ret[i] = i + 1; // ����1-x������x������
//	}
//	return ret;
//}
//// ����valueֵ�������е�λ�ã����������±�
//// ʹ��ǰ�ᣬarrΪ��������
//int arrayKey(int* arr, int arrSize, int value)
//{
//	assert(arr);
//	int left = 0, right = arrSize - 1;
//	// �ж��Ƿ�Ϊ����
//	int isAscending = arr[right] > arr[left];
//	int mid;
//	while (left <= right)
//	{
//		// �м�ֵ�±�
//		mid = left + (right - left);
//		if (arr[mid] == value)
//		{
//			return mid;
//		}
//		else
//		{
//			if (isAscending) // ���������߼�
//			{
//				if (arr[mid] < value)
//				{
//					left = mid + 1;
//				}
//				else
//				{
//					right = mid - 1;
//
//				}
//			}
//			else // ���������߼�
//			{
//				if (arr[mid] < value)
//				{
//					right = mid - 1;
//				}
//				else
//				{
//					left = mid + 1;
//				}
//			}
//		}
//	}
//	return -1; // �����в�����valueֵ
//}
//int main()
//{
//	int size = 10;
//	int* arr = createSortedArray(size);
//	printf("%d\n", arrayKey(arr, size, 4));
//	return 0;
//}


//// ���ۣ�144. ��������ǰ�����
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//// Definition for a binary tree node.
//typedef struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//}TreeNode;
//// Note: The returned array must be malloced, assume caller calls free().
//
//// �������ڵ�ֵ�� ǰ�� ����
//void _preorderTraversal(struct TreeNode* root, int* arr, int* size)
//{
//    if (root == NULL)
//        return;
//
//    // ��
//    int tmp = root->val;
//    arr[(*size)++] = root->val;
//    // ������
//    _preorderTraversal(root->left, arr, size);
//    // ������
//    _preorderTraversal(root->right, arr, size);
//}
//int TreeSize(struct TreeNode* root)
//{
//    if (root == NULL)
//        return 0;
//
//    return 1 + TreeSize(root->left) + TreeSize(root->right);
//}
//// ����Ĺؼ����ڣ���Ҫ˼��ֱ������������������ݹ飬����������ʺϵݹ�
//// ��Ϊ�����Ķ����ģ��޷����Ӳ�������������ָ��
//// ���ʹ��ȫ�ֵ�����ָ�룬leetcode�ڶ������������������������һ���������������ݻ��ڣ����ô���
//// ���дһ���µĺ������ݹ飬���������������ò���������ء�
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    if (root == NULL)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//    int capacity = TreeSize(root);
//    int* retArray = (int*)malloc(sizeof(int) * capacity);
//    assert(retArray);
//    *returnSize = capacity;
//    int size = 0;
//    _preorderTraversal(root, retArray, &size);
//    return retArray;
//}
//
//// ================== �������ڱ���ide�ϵĵ���debug����=========================
//// �����������ڵ�
//TreeNode* CreateTreeNode(int x)
//{
//    TreeNode* ret = (TreeNode*)malloc(sizeof(TreeNode));
//    assert(ret);
//    ret->val = x;
//    ret->left = ret->right = NULL;
//    return ret;
//}
//// �ݹ����ٶ�����
//void DestroyBinaryTree(struct TreeNode* root)
//{
//    if (root == NULL)
//        return;
//    else
//    {
//        //// ǰ��ݹ�����
//        //TreeNode* left = root->left;
//        //TreeNode* right = root->right;
//        //free(root);
//        //DestroyBinaryTree(left);
//        //DestroyBinaryTree(right);
//
//        // ��Ȼ��ǰʵ������ȷ�ģ������������������ȵݹ��������������ͷŵ�ǰ�ڵ�
//        DestroyBinaryTree(root->left);
//        DestroyBinaryTree(root->right);
//        free(root);
//    }
//}
//int main()
//{
//    TreeNode* A = CreateTreeNode(1);
//    TreeNode* B = CreateTreeNode(2);
//    TreeNode* C = CreateTreeNode(3);
//    A->left = B;
//    A->right = C;
//    int returnSize = 0;
//    int* arr = preorderTraversal(A, &returnSize);
//    // ������ݽ�ȥ���ǿ����������޸�returnsize��ֵΪ�㣬
//    // ��������ı���������У�Ӧ��û���⣬��������Ϊ���Ͻ������Ƕ�����һ��
//    assert(arr);
//    for (int i = 0; i < returnSize; ++i)
//    {
//        printf("%d ", arr[i]);
//    }
//    free(arr);
//    DestroyBinaryTree(A);
//    return 0;
//}


//// ===============����1=========================
// // ����Ƿ񡰲��ǵ�ֵ��������
// bool _isNotUnivalTree(struct TreeNode* root, int value)
// {
//     if (root == NULL)
//         return false;
//     if (root->val != value)
//         return true;
//     /*
//     // �����������
//     // ����ֵ֮�����ӣ��Ƚ�������������Ȼ����Ӻ���ת�ز���ֵ����0ֵ��Ϊ��
//     return _isNotUnivalTree(root->left, value) + _isNotUnivalTree(root->right, value);
//     */
//
//     // �����������������������ֱ�ӷ��أ��ٵݹ�һ������
//     // ������������Ƿ�������ڵ㲻ͬ��ֵ
//     if (_isNotUnivalTree(root->left, value))
//         return true;
//     if (_isNotUnivalTree(root->right, value))
//         return true;
//
//     // �Ըýڵ�Ϊ���������ϵ�ֵ�������������ǵ�ֵ������������Ϊ��
//     return false; 
// }
//
// bool isUnivalTree(struct TreeNode* root) {
//     if (root == NULL)
//     {
//         return false;
//     }
//     else
//     {
//         return _isNotUnivalTree(root, root->val) ? false : true ;
//     }
//
// }
//
//// ===============����2=========================
// // ����Ƿ�Ϊ��ֵ������
// bool _isUnivalTree(struct TreeNode* root, int value)
// {
//     if (root == NULL)
//         return true;
//     if (root->val != value)
//         return false;
//
//     // // ������������Ƿ�������ڵ㲻ͬ��ֵ
//     // if (_isUnivalTree(root->left, value) == false)
//     //     return false;
//     // if (_isUnivalTree(root->right, value) == false)
//     //     return false;
//
//     // // �Ըýڵ�Ϊ���������ϵ�ֵ������
//     // return true; 
//
//     // �����������(������д��)
//     return _isUnivalTree(root->left, value) && _isUnivalTree(root->right, value);
// }
//
// bool isUnivalTree(struct TreeNode* root) {
//     if (root == NULL)
//     {
//         return false;
//     }
//     else
//     {
//         return _isUnivalTree(root, root->val);
//     }
//
// }

