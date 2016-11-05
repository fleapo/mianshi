#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <cstring>
#include "btree.h"
using namespace std;
#define bt BinaryTreeNode
int GetDepth(bt *pRoot)
{
	if (pRoot == NULL)
	{
		return 0;
	}

	//  int nLeftLength = GetDepth(pRoot->m_left);  
	//  int nRigthLength = GetDepth(pRoot->m_right);  
	//  return nLeftLength > nRigthLength ? (nLeftLength + 1) : (nRigthLength + 1);  

	return GetDepth(pRoot->m_pLeft) > GetDepth(pRoot->m_pRight) ?
		(GetDepth(pRoot->m_pLeft) + 1) : (GetDepth(pRoot->m_pRight) + 1);
}
int shendu(bt* tree)
{
	if (tree == NULL)
		return 0;
	return shendu(tree->m_pLeft) < shendu(tree->m_pRight) ? shendu(tree->m_pRight) + 1 : shendu(tree->m_pRight) + 1;

}
int kuandu(bt* tree)
{
	if (tree == NULL)
		return 0;
	stack<bt*> T;
	T.push(tree);
	int max = 0;
	while (!T.empty())
	{
		vector<bt*> temp;
		while (!T.empty())
		{
			temp.push_back(T.top());
			T.pop();

		}
		max = max < temp.size() ? temp.size() : max;
		for (auto i : temp)
		{
			if (i->m_pLeft != NULL)
				T.push(i->m_pLeft);
			if (i->m_pRight != NULL)
				T.push(i->m_pRight);
		}

	}
	return max;
}
int mainkuandushendu()
{
	int preorder[15] = { 8,4,2,1,3,6,5,7,12,10,9,11,14,13,15 };
	//{8,4,2,1,3,6,5,7,12,10,9,11,14,13,15};{ 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	//{ 1,2,4,7,3,5,6,8 };
	int inorder[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	BinaryTreeNode* Tree = Construct(preorder, inorder, 15);
	cout << GetDepth(Tree) << endl;
	cout << shendu(Tree) << endl;
	cout << kuandu(Tree);
	return 1;
}
