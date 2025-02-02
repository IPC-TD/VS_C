#pragma once
#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include <errno.h>

//// ��̬�汾
//#define N 7
//typedef int SeqListDateType;
//
//typedef struct SequentialList
//{
//	SeqListDateType array[7]; // ��������
//	size_t size; // ��Ч���ݸ���
//}SL;

// ��̬�汾
typedef int SLDataType;
typedef struct SequentialList
{
	SLDataType* array; // ָ��̬���ٵ����飨��Ԫ�أ������õ�ͬ������
	size_t size; // ��Ч���ݸ���
	size_t capacity; // �����С��������
}SL, SeqList; // �����������ĸ�����

// ��ӡ��Ϣ
void SLPrint(SeqList* ps);

// ��ʼ��
void SeqListInit(SeqList* ps);

// �������
void CheckCapacity(SeqList* ps);

// ˳���β��
void SeqListPushBack(SeqList* ps, SLDataType x);

// ˳���βɾ
void SeqListPopBack(SeqList* ps);

/*
Ϊ�˷��㣬�������˳���ṹ�����ͣ��ü�д������SL����
*/
// ˳���ͷ��
void SeqListPushFront(SL* ps, SLDataType x);

// ˳���ͷɾ
void SeqListPopFront(SL* ps);