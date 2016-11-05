//#include <iostream>
//#include <string>
//#include <stack>
//#include <cstring>
//#include "¶þ²æÊ÷.cpp"
//using namespace std;
//#define bt BinaryTreeNode
//struct BinaryTreeNode;
////{
////	int 			m_nvalue;
////	binarytreenode*	m_pleft;
////	binarytreenode* m_pright;
////};
//BinaryTreeNode* Construct(int* preorder, int* inorder, int length);
////{
////	if (length == 0)
////		return NULL;
////	if (length == 1)
////	{
////		BinaryTreeNode* root = new BinaryTreeNode();
////		root->m_nValue = preorder[0];
////		return root;
////	}
////	BinaryTreeNode* root = new BinaryTreeNode();
////	root->m_nValue = preorder[0];
////	int i = 0;
////	for (; i < length; ++i)
////	{
////		if (inorder[i] == preorder[0])
////			break;
////	}
////	if (i >= length)
////	{
////		return NULL;
////	}
////	root->m_pLeft = Construct(preorder + 1, inorder, i);
////	root->m_pRight = Construct(preorder + i + 1, inorder + i + 1, length - i - 1);
////	return root;
////}
//int mainkuandu()
//{
//	int preorder[15] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
//	//{8,4,2,1,3,6,5,7,12,10,9,11,14,13,15};
//	//{ 1,2,4,7,3,5,6,8 };
//	int inorder[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	BinaryTreeNode* Tree = Construct(preorder, inorder, 15);
//	return 1;
//}