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
// 创建二叉树节点
BTNode* BTNodeCreate(BTDataType x)
{
	BTNode* ret = (BTNode*)malloc(sizeof(BTNode));
	assert(ret);
	ret->_data = x;
	ret->_left = ret->_right = NULL;
	return ret;
}
// 二叉树节点数量
int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return 1 + TreeSize(root->_left) + TreeSize(root->_right);
}
// 二叉树叶子节点数量
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else if (!root->_left && !root->_right)
		return 1;
	else
	return TreeLeafSize(root->_left) + TreeLeafSize(root->_right);
}
// 二叉树深度
int TreeDepth(BTNode* root)
{
	if (root == NULL)
		return 0;
	int num1 = TreeDepth(root->_left);
	int num2 = TreeDepth(root->_right);
	return 1 + (num1 > num2 ? num1 : num2);
}
// 前序遍历
void PrevOrder(BTNode* root);
// 中序遍历
void InOrder(BTNode* root);
// 后序遍历
void PostOrder(BTNode* root);
// 层序遍历（结合画图理解）
void BinaryTreeLevelOrder(BTNode* root)
{
	// 空树直接返回
	if (root == NULL)
		return;

	// 创建并初始化队列
	Queue q;
	QueueInit(&q);
	// 将根节点入队
	QueuePush(&q, root);
	// 只要队列非空，就是还有节点需要打印
	while (!QueueEmpty(&q))
	{
		// 统计每一层的有效节点数（为了分层级打印）
		int size = QueueSize(&q);

		// 该层节点依次出队，如果左右孩子非空，则在队尾入队
		while (size--)
		{
			// 获取当前层级的一个二叉树节点
			BTNode* bt = QueueFront(&q);
			QueuePop(&q);

			// 打印
			printf("%c ", bt->_data);

			// 判断左右孩子是否非空，非空则队尾入队，放在二叉树的下一层节点中等待打印
			if (bt->_left)
				QueuePush(&q, bt->_left);
			if (bt->_right)
				QueuePush(&q, bt->_right);
		}
		// 当前层的节点答应完了，分割一下
		printf("\n");
	}
	QueueDestroy(&q);
}
// 判断一颗二叉树是否为完全二叉树
// 如果是返回1，不是返回0
int BinaryTreeComplete(BTNode* root)
{
	// 空集合（空树）不违反完全二叉树定义，为真
	if (root == NULL)
		return 1;

	// 创建并初始化队列
	Queue q;
	QueueInit(&q);
	// 根节点入队
	QueuePush(&q, root);
	// 采用层序遍历
	// 如果是完全二叉树，所有非空节点先入队，才会轮到非空节点入队
	while (!QueueEmpty(&q))
	{
		// 队头取数据，并出队
		BTNode* bt = QueueFront(&q);
		QueuePop(&q);

		// 如果遇到空节点，停止出队
		if (bt == NULL)
			break;

		// 非空节点左右孩子入队
		QueuePush(&q, bt->_left);
		QueuePush(&q, bt->_right);
	}
	// 如果是完全二叉树，队列中剩下的，应该都为空节点
	while (!QueueEmpty(&q))
	{
		// 队头取数据，并出队
		BTNode* bt = QueueFront(&q);
		QueuePop(&q);

		// 如果遇到非空节点，则说明不是完全二叉树（后续难理解就画图）
		if (bt)
		{
			QueueDestroy(&q); // 记得销毁队列，避免内存泄露
			return 0;
		}
	}
	// 到这说明所有数据都已经出队，并在后半段队列数据中，没有非空节点
	// 符合完全二叉树的性质
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
	printf("BinaryTreeComplete：%d", BinaryTreeComplete(A));
}
int main()
{
	// TestBT_1();
	TestBT_2();
}