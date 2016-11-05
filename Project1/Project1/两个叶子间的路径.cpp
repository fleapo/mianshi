#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <cstring>
#include "btree.h"
using namespace std;
#define bt BinaryTreeNode
//BinaryTreeNode* Construct(int* preorder, int* inorder, int length);
vector<bt*> lj;
int sum = 0;
void printLujing(bt* root, int n)
{
	if (root == NULL)
		return;
	lj.push_back(root);
	for (auto i : lj)
	{
		sum += i->m_nValue;
	}
	if (sum == n)
	{
		sum = 0;
		for (auto i : lj)
		{
			cout << i->m_nValue << " ";
		}
	}
	else
		sum = 0;
	printLujing(root->m_pLeft,n);
	printLujing(root->m_pRight, n);
	lj.pop_back();
}
vector<bt*> shuchu1;
vector<bt*> shuchu2;
void print(bt* root, int n1, int n2)
{
	if (root == NULL)
		return;
	lj.push_back(root);
	if (root->m_nValue == n1 )
	{
		for (auto i : lj)
		{
			cout << i->m_nValue << " ";
			shuchu1.push_back(i);
		}
	}
	if (root->m_nValue == n2)
	{
		for (auto i : lj)
		{
			cout << i->m_nValue << " ";
			shuchu2.push_back(i);
		}
	}
	print(root->m_pLeft, n1,n2);
	print(root->m_pRight, n1,n2);
	lj.pop_back();

}
int mainlujing()
{
	int preorder[15] = { 8,4,2,1,3,6,5,7,12,10,9,11,14,13,15 }; 
	//{8,4,2,1,3,6,5,7,12,10,9,11,14,13,15};{ 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	//{ 1,2,4,7,3,5,6,8 };
	int inorder[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	BinaryTreeNode* Tree = Construct(preorder, inorder, 15);
	//printLujing(Tree, 39);
	print(Tree, 1, 3);
	return 1;
}