#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
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
int main()
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
	return 0;
}