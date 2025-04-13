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
	// 空树节点数量为零
	if (root == NULL)
		return 0;
	// 一颗二叉树的节点数量，被分解为根节点+左子树节点数量+右子树节点数量
	return 1 + TreeSize(root->_left) + TreeSize(root->_right);
}
// 二叉树叶子节点数量
int TreeLeafSize(BTNode* root)
{
	// 一颗二叉树叶子节点数 = 根节点（由可能是） + 左右子树中叶子节点的数量

	if (root == NULL) // 空树无节点
		return 0;
	else if (!root->_left && !root->_right) // 当左右子树均为空，则为叶子节点
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
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL) // 空树节点数为0
		return 0;

	if (k == 1) // 如果是第k层的节点，则返回1
		return 1;
	
	// 如果不是第k层，则返回左右子树的中第k层节点数之和
	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	// 空树没有节点，返回空
	if (root == NULL)
		return NULL;

	// 如果找到了，返回节点指针
	if (root->_data == x)
		return root;

	// 尝试在左子树中查找
	BTNode* ret = BinaryTreeFind(root->_left, x);
	if (ret)
		return ret;

	// 尝试在右子树中查找
	ret = BinaryTreeFind(root->_right, x);
	if (ret)
		return ret;

	// 都找不到，则返回空
	return NULL;
}
// 二叉树前序遍历 
void PreOrder(BTNode* root)
{
	if (root == NULL)
		return;

	printf("%c ", root->_data);
	PreOrder(root->_left);
	PreOrder(root->_right);
}
// 二叉树中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)
		return;

	PreOrder(root->_left);
	printf("%c ", root->_data);
	PreOrder(root->_right);
}
// 二叉树后序遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)
		return;

	PreOrder(root->_left);
	PreOrder(root->_right);
	printf("%c ", root->_data);
}
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
// 通过前序遍历的数组构建二叉树
BTNode* BinaryTreeCreate(BTDataType* arr, int arrSize, int* index)
{
	// 如果已经超出数组的有效返回，则返回空
	if (*index >= arrSize)
		return NULL;

	// 如果 # 号，按规则不创建节点，返回空
	if (arr[*index] == '#')
	{
		++(*index);
		return NULL;
	}

	// 创建根节点
	BTNode* bt = BTNodeCreate(arr[*index]);
	bt->_data = arr[*index];
	++(*index);

	// 递归创建左右子树，并赋值给根节点
	bt->_left = BinaryTreeCreate(arr, arrSize, index);
	bt->_right = BinaryTreeCreate(arr, arrSize, index);

	// 将创建好的二叉树根节点返回
	return bt;
}

// 二叉树销毁
void BinaryTreeDestory(BTNode** root)
{
	if (*root == NULL)
		return;

	// 递归销毁左右子树
	BinaryTreeDestory(&(*root)->_left);
	BinaryTreeDestory(&(*root)->_right);

	// 销毁根节点
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

	// 二叉树前序遍历 
	PreOrder(A);
	// 二叉树中序遍历
	InOrder(A);
	// 二叉树后序遍历
	PostOrder(A);

	// 二叉树节点数
	printf("TreeSize: %d\n", TreeSize(A));
	// // 二叉树叶子节点数
	printf("TreeLeafSize: %d\n", TreeLeafSize(A));
	// 二叉树深度
	printf("TreeDepth: %d\n", TreeDepth(A));
	// 二叉树第k层节点数
	printf("BinaryTreeLevelKSize: %d\n", BinaryTreeLevelKSize(A, 3));
	// 二叉树查找节点
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
	printf("BinaryTreeComplete：%d", BinaryTreeComplete(A));
}
void TestBT_3()
{
	BTDataType arr[] = "ABD##E#H##CF##G##";

	int index = 0;
	int arrSize = (int)strlen(arr);
	// 创建二叉树
	BTNode* bt = BinaryTreeCreate(arr, arrSize, &index);
	// 以层序的方式打印
	BinaryTreeLevelOrder(bt);
	// 判断是否为完全二叉树
	printf("BinaryTreeComplete：%d", BinaryTreeComplete(bt));
	// 销毁二叉树
	BinaryTreeDestory(&bt);
}
int main()
{
	// TestBT_1();
	// TestBT_2();
	TestBT_3();
	return 0;
}