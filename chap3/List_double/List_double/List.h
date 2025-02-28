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

// �������������ͷ���.
ListNode* ListCreate();
// ˫����������
void ListDestory(ListNode* plist);
// ˫������������ݽڵ�
void ListClear(ListNode* plist);
// ˫�������ӡ
void ListPrint(ListNode* plist);
// ˫������β��
void ListPushBack(ListNode* plist, LTDataType x);
// ˫������βɾ
void ListPopBack(ListNode* plist);
// ˫������ͷ��
void ListPushFront(ListNode* plist, LTDataType x);
// ˫������ͷɾ
void ListPopFront(ListNode* plist);
// ˫���������
ListNode* ListFind(ListNode* plist, LTDataType x);
// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x);
// ˫������ɾ��posλ�õĽ��
void ListErase(ListNode* pos);
