#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"
typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;
// �����������ڵ�
BTNode* BTNodeCreate(BTDataType x)
{
	BTNode* ret = (BTNode*)malloc(sizeof(BTNode));
	assert(ret);
	ret->_data = x;
	ret->_left = ret->_right = NULL;
	return ret;
}
// �������ڵ�����
int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return 1 + TreeSize(root->_left) + TreeSize(root->_right);
}
// ������Ҷ�ӽڵ�����
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else if (!root->_left && !root->_right)
		return 1;
	else
	return TreeLeafSize(root->_left) + TreeLeafSize(root->_right);
}
// ���������
int TreeDepth(BTNode* root)
{
	if (root == NULL)
		return 0;
	int num1 = TreeDepth(root->_left);
	int num2 = TreeDepth(root->_right);
	return 1 + (num1 > num2 ? num1 : num2);
}
// ǰ�����
void PrevOrder(BTNode* root);
// �������
void InOrder(BTNode* root);
// �������
void PostOrder(BTNode* root);
// �����������ϻ�ͼ��⣩
void BinaryTreeLevelOrder(BTNode* root)
{
	// ����ֱ�ӷ���
	if (root == NULL)
		return;

	// ��������ʼ������
	Queue q;
	QueueInit(&q);
	// �����ڵ����
	QueuePush(&q, root);
	// ֻҪ���зǿգ����ǻ��нڵ���Ҫ��ӡ
	while (!QueueEmpty(&q))
	{
		// ͳ��ÿһ�����Ч�ڵ�����Ϊ�˷ֲ㼶��ӡ��
		int size = QueueSize(&q);

		// �ò�ڵ����γ��ӣ�������Һ��ӷǿգ����ڶ�β���
		while (size--)
		{
			// ��ȡ��ǰ�㼶��һ���������ڵ�
			BTNode* bt = QueueFront(&q);
			QueuePop(&q);

			// ��ӡ
			printf("%c ", bt->_data);

			// �ж����Һ����Ƿ�ǿգ��ǿ����β��ӣ����ڶ���������һ��ڵ��еȴ���ӡ
			if (bt->_left)
				QueuePush(&q, bt->_left);
			if (bt->_right)
				QueuePush(&q, bt->_right);
		}
		// ��ǰ��Ľڵ��Ӧ���ˣ��ָ�һ��
		printf("\n");
	}
	QueueDestroy(&q);
}
// �ж�һ�Ŷ������Ƿ�Ϊ��ȫ������
// ����Ƿ���1�����Ƿ���0
int BinaryTreeComplete(BTNode* root)
{
	// �ռ��ϣ���������Υ����ȫ���������壬Ϊ��
	if (root == NULL)
		return 1;

	// ��������ʼ������
	Queue q;
	QueueInit(&q);
	// ���ڵ����
	QueuePush(&q, root);
	// ���ò������
	// �������ȫ�����������зǿսڵ�����ӣ��Ż��ֵ��ǿսڵ����
	while (!QueueEmpty(&q))
	{
		// ��ͷȡ���ݣ�������
		BTNode* bt = QueueFront(&q);
		QueuePop(&q);

		// ��������սڵ㣬ֹͣ����
		if (bt == NULL)
			break;

		// �ǿսڵ����Һ������
		QueuePush(&q, bt->_left);
		QueuePush(&q, bt->_right);
	}
	// �������ȫ��������������ʣ�µģ�Ӧ�ö�Ϊ�սڵ�
	while (!QueueEmpty(&q))
	{
		// ��ͷȡ���ݣ�������
		BTNode* bt = QueueFront(&q);
		QueuePop(&q);

		// ��������ǿսڵ㣬��˵��������ȫ�����������������ͻ�ͼ��
		if (bt)
		{
			QueueDestroy(&q); // �ǵ����ٶ��У������ڴ�й¶
			return 0;
		}
	}
	// ����˵���������ݶ��Ѿ����ӣ����ں��ζ��������У�û�зǿսڵ�
	// ������ȫ������������
	return 1;
}
void TestBT_1()
{
	BTNode* A = BTNodeCreate('A');
	BTNode* B = BTNodeCreate('B');
	BTNode* C = BTNodeCreate('C');
	BTNode* D = BTNodeCreate('D');
	BTNode* E = BTNodeCreate('E');

	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;

	printf("TreeSize: %d\n", TreeSize(A));
	printf("TreeLeafSize: %d\n", TreeLeafSize(A));
	printf("TreeDepth: %d\n", TreeDepth(A));
}

void TestBT_2()
{
	BTNode* A = BTNodeCreate('A');
	BTNode* B = BTNodeCreate('B');
	BTNode* C = BTNodeCreate('C');
	BTNode* D = BTNodeCreate('D');
	BTNode* E = BTNodeCreate('E');

	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;

	BinaryTreeLevelOrder(A);
	printf("BinaryTreeComplete��%d", BinaryTreeComplete(A));
}
int main()
{
	// TestBT_1();
	TestBT_2();
}