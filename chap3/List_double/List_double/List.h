#define _CRT_SECURE_NO_WARNINGS
#include <malloc.h>
#include <assert.h>
#include <stdio.h>

typedef int LTDataType;
typedef struct ListNode
{
    LTDataType _data;
    struct ListNode* next;
    struct ListNode* prev;
}ListNode;

// 创建返回链表的头结点.
ListNode* ListCreate();
// 双向链表销毁
void ListDestory(ListNode* plist);
// 双向链表清除数据节点
void ListClear(ListNode* plist);
// 双向链表打印
void ListPrint(ListNode* plist);
// 双向链表尾插
void ListPushBack(ListNode* plist, LTDataType x);
// 双向链表尾删
void ListPopBack(ListNode* plist);
// 双向链表头插
void ListPushFront(ListNode* plist, LTDataType x);
// 双向链表头删
void ListPopFront(ListNode* plist);
// 双向链表查找
ListNode* ListFind(ListNode* plist, LTDataType x);
// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x);
// 双向链表删除pos位置的结点
void ListErase(ListNode* pos);
