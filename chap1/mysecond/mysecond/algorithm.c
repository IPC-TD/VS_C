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

//int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
//    assert(num);
//    if (k > 0)
//    {
//        // 统计k位数
//        int count = 0;
//        int tmp = k;
//        while (tmp > 0)
//        {
//            count++;
//            tmp /= 10;
//        }
//        // 调整num数组到适合的大小
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
//        // 将有效数字移动到末尾
//        tmp = num_end;
//        for (int cur = numSize - 1; cur >= 0; --cur)
//        {
//            num[tmp] = num[cur];
//            tmp--;
//        }
//        // 其他位置零
//        while (tmp >= 0)
//        {
//            num[tmp] = 0;
//            tmp--;
//        }
//        // 开始加法运算
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
//        // 处理剩余进项
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
//        // 有效数字前移
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
//// 产生代表整数的数组
//int* positiveIntegerDigitToArray(size_t k, int* arrSize)
//{
//    assert(arrSize);
//    // 统计位数
//    size_t count = 0;
//    size_t tmp = k;
//    while (tmp > 0)
//    {
//        count++;
//        tmp /= 10;
//    }
//    *arrSize = count;
//    // 开辟内存
//    int* ret = (int*)malloc(count * sizeof(int));
//    assert(ret);
//    // 填充数字
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


//// 力扣题目Debug
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//
//// 买节点
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
//// 尾插
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
//// 打印链表
//void ListPrint(struct ListNode* head)
//{
//    if (NULL == head)
//    {
//        puts("链表为空！");
//    }
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        printf("%d->", cur->val);
//        cur = cur->next;
//    }
//    printf("NULL\n");
//}
// 力扣206链表反转题目Debug
// 三指针节点方向逆转解法
// struct ListNode* reverseList(struct ListNode* head) {
//     // 链表为空
//     // 链表一个节点或者多个节点
//     if (NULL == head)
//     {
//         return head;
//     }
//     else
//     {
//         // 记录下一个节点指针，然后指向上一个节点
//         // 进入下一个节点重复操作，直到遇到链表尾
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
//// 力扣206链表反转题目Debug
//// 遍历头插解法(反转链表)
//struct ListNode* reverseList(struct ListNode* head) {
//    // 链表为空或者只有一个节点
//    if (head == NULL || head->next == NULL) // 先判断空，再判断后面，head->next不会崩
//    {
//        return head;
//    }
//    // 多节点情况
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
//    // 同样的思路，这种的方法，上面不用判断也也可以
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

// 力扣206链表反转题目Debug
// // 尝试递归解法(反转链表)
// struct ListNode* reverseList(struct ListNode* head) {
//     // 链表为空
//     // 链表一个节点或者多个节点
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
//         // 递归终结条件是什么？每次调用是否越来越接近限制条件？
//         // 先找链表尾
//         // 链表尾指向上一个节点
//         // 并返回链表尾地址
//         // 到达链表头指向空
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
//// 力扣203移除链表元素题目Debug
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    // 找新头部
//    struct ListNode* newhead = head;
//    while (newhead && newhead->val == val)
//    {
//        // struct ListNode* del = newhead;// 如果是动态开辟的,准备释放
//        newhead = newhead->next;
//        // free(del);
//    }
//    if (newhead == NULL)
//    {
//        return NULL;
//    }
//    // 处理头部后的节点
//    struct ListNode* cur = newhead;
//    struct ListNode* next = NULL;
//    while (cur)
//    {
//        next = cur->next;
//        while (next && (next->val == val))
//        {
//            // struct ListNode* del = next;// 如果是动态开辟的,准备释放
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
//测试用例：
//3
//1 2 3
//1
//预期输出：3
//8
//1 2 3 4 5 6 7 8
//4
//预期输出：5
//*/
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n))
//    {
//        // 接收值，并创建链表
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
//        // 假设我不知道链表的节点数，求倒数第k个节点的值
//        cur = head; // 快指针fast
//        ListNode* target = head;// 慢指针slow
//        int count = 0;
//        int k = 0;
//        scanf("%d", &k);
//        // 当前结束控制思路是：先控制快慢指针相差的k步，然后一起走
//        while (cur)
//        {
//            count++;// 当前fast(cur)为第几个节点
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
//        // 内存释放
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
//* 力扣989. 数组形式的整数加法
//1 <= num.length <= 10的4次方
//0 <= num[i] <= 9
//num 不包含任何前导零，除了零本身
//1 <= k <= 104
//*/
//int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
//{
//	// 当前C语言现有固定大小容器无法接收，10的4次方位数的数字
//	// 因此无法将该数从数组中取出进行计算。
//	// 本题采用传统进制加法，处理num数组大数的每一位
//	
//	// 计算k的位数
//	int count = 0;
//	int tmp_k = k;
//	while (tmp_k)
//	{
//		tmp_k /= 10;
//		count++;
//	}
//	// 判断num和k谁的位数多，来调整num数组
//	// 加小于等于自己的数，位数最多增加一位
//	int newNumSize = numSize > count ? (numSize + 1) : (count + 1);
//	int* ret = (int*)realloc(num, sizeof(int) * newNumSize);
//	if (NULL == ret)
//	{
//		exit(1);
//	}
//	num = ret;
//	// 有效位后移
//	for (int i = numSize - 1, new_i = newNumSize - 1; i >= 0; --i, --new_i)
//	{
//		num[new_i] = num[i];
//	}
//	// 无效位置零
//	for (int i = 0; i < newNumSize - numSize; ++i)
//	{
//		num[i] = 0;
//	}
//	// 从num数组最小位，逐位相加
//	int carry = 0; // 进项位
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
//	// 移除首位0的情况
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
//	// 测试用例：
//	int* num = (int*)calloc(4, sizeof(int));
//	if (num)
//	{
//		num[0] = 1, num[1] = 2, num[2] = 0, num[3] = 0;
//	}
//	int k = 34;
//	int returnSize = 0; // 输出型参数
//	// 期望结果{1, 2, 3, 4};
//	
//	// 完善实现：addToArrayForm函数
//	int* ret = addToArrayForm(num, 4, k, &returnSize);
//}
//int main()
//{
//	test();
//	return 0;
//}

