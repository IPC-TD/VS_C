#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
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
	// �����ڵ�����Ϊ��
	if (root == NULL)
		return 0;
	// һ�Ŷ������Ľڵ����������ֽ�Ϊ���ڵ�+�������ڵ�����+�������ڵ�����
	return 1 + TreeSize(root->_left) + TreeSize(root->_right);
}
// ������Ҷ�ӽڵ�����
int TreeLeafSize(BTNode* root)
{
	// һ�Ŷ�����Ҷ�ӽڵ��� = ���ڵ㣨�ɿ����ǣ� + ����������Ҷ�ӽڵ������

	if (root == NULL) // �����޽ڵ�
		return 0;
	else if (!root->_left && !root->_right) // ������������Ϊ�գ���ΪҶ�ӽڵ�
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
// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL) // �����ڵ���Ϊ0
		return 0;

	if (k == 1) // ����ǵ�k��Ľڵ㣬�򷵻�1
		return 1;
	
	// ������ǵ�k�㣬�򷵻������������е�k��ڵ���֮��
	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}
// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	// ����û�нڵ㣬���ؿ�
	if (root == NULL)
		return NULL;

	// ����ҵ��ˣ����ؽڵ�ָ��
	if (root->_data == x)
		return root;

	// �������������в���
	BTNode* ret = BinaryTreeFind(root->_left, x);
	if (ret)
		return ret;

	// �������������в���
	ret = BinaryTreeFind(root->_right, x);
	if (ret)
		return ret;

	// ���Ҳ������򷵻ؿ�
	return NULL;
}
// ������ǰ����� 
void PreOrder(BTNode* root)
{
	if (root == NULL)
		return;

	printf("%c ", root->_data);
	PreOrder(root->_left);
	PreOrder(root->_right);
}
// �������������
void InOrder(BTNode* root)
{
	if (root == NULL)
		return;

	PreOrder(root->_left);
	printf("%c ", root->_data);
	PreOrder(root->_right);
}
// �������������
void PostOrder(BTNode* root)
{
	if (root == NULL)
		return;

	PreOrder(root->_left);
	PreOrder(root->_right);
	printf("%c ", root->_data);
}
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
// ͨ��ǰ����������鹹��������
BTNode* BinaryTreeCreate(BTDataType* arr, int arrSize, int* index)
{
	// ����Ѿ������������Ч���أ��򷵻ؿ�
	if (*index >= arrSize)
		return NULL;

	// ��� # �ţ������򲻴����ڵ㣬���ؿ�
	if (arr[*index] == '#')
	{
		++(*index);
		return NULL;
	}

	// �������ڵ�
	BTNode* bt = BTNodeCreate(arr[*index]);
	bt->_data = arr[*index];
	++(*index);

	// �ݹ鴴����������������ֵ�����ڵ�
	bt->_left = BinaryTreeCreate(arr, arrSize, index);
	bt->_right = BinaryTreeCreate(arr, arrSize, index);

	// �������õĶ��������ڵ㷵��
	return bt;
}

// ����������
void BinaryTreeDestory(BTNode** root)
{
	if (*root == NULL)
		return;

	// �ݹ�������������
	BinaryTreeDestory(&(*root)->_left);
	BinaryTreeDestory(&(*root)->_right);

	// ���ٸ��ڵ�
	free(*root);
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

	// ������ǰ����� 
	PreOrder(A);
	// �������������
	InOrder(A);
	// �������������
	PostOrder(A);

	// �������ڵ���
	printf("TreeSize: %d\n", TreeSize(A));
	// // ������Ҷ�ӽڵ���
	printf("TreeLeafSize: %d\n", TreeLeafSize(A));
	// ���������
	printf("TreeDepth: %d\n", TreeDepth(A));
	// ��������k��ڵ���
	printf("BinaryTreeLevelKSize: %d\n", BinaryTreeLevelKSize(A, 3));
	// ���������ҽڵ�
	printf("BinaryTreeFind: %c\n", BinaryTreeFind(A, 'B')->_data);

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
void TestBT_3()
{
	BTDataType arr[] = "ABD##E#H##CF##G##";

	int index = 0;
	int arrSize = (int)strlen(arr);
	// ����������
	BTNode* bt = BinaryTreeCreate(arr, arrSize, &index);
	// �Բ���ķ�ʽ��ӡ
	BinaryTreeLevelOrder(bt);
	// �ж��Ƿ�Ϊ��ȫ������
	printf("BinaryTreeComplete��%d", BinaryTreeComplete(bt));
	// ���ٶ�����
	BinaryTreeDestory(&bt);
}
int main()
{
	// TestBT_1();
	// TestBT_2();
	TestBT_3();
	return 0;
}