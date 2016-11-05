#include <iostream>
#include <string>
#include <stack>
#include <cstring>
#include "tou.h"
using namespace std;
#define bt BinaryTreeNode
BinaryTreeNode* Construct(int* preorder, int* inorder, int length)
{
	if (length == 0)
		return NULL;
	if (length == 1)
	{
		BinaryTreeNode* root = new BinaryTreeNode();
		root->m_nValue = preorder[0];
		return root;
	}
	BinaryTreeNode* root = new BinaryTreeNode();
	root->m_nValue = preorder[0];
	int i = 0;
	for (; i < length; ++i)
	{
		if (inorder[i] == preorder[0])
			break;
	}
	if (i >= length)
	{
		return NULL;
	}
	root->m_pLeft = Construct(preorder + 1, inorder, i);
	root->m_pRight = Construct(preorder + i + 1, inorder + i + 1, length - i - 1);
	return root;
}
void qx(BinaryTreeNode* root)
{
	if (root == NULL)
		return;
	cout << root->m_nValue << " ";
	//if (root->m_pLeft != NULL)
	qx(root->m_pLeft);
	//if (root->m_pRight != NULL)
	qx(root->m_pRight);
}
void qqx(const bt* root)
{
	if (root == NULL)
		return;
	stack<const bt*> s;
	const bt* p = root;
	s.push(p);
	cout << p->m_nValue << " ";
	while (!s.empty())
	{
		while (p->m_pLeft != NULL)
		{
			p = p->m_pLeft;
			s.push(p);
			cout << p->m_nValue << " ";
		}
		const bt* print = s.top();
		s.pop();
		if (print->m_pRight != NULL)
		{
			p = print->m_pRight;
			s.push(p);
			cout << p->m_nValue << " ";
		}
	}

}
void zx(const bt* root)
{
	if (root == NULL)
		return;
	zx(root->m_pLeft);
	cout << root->m_nValue << " ";
	zx(root->m_pRight);
}
void zzx(const bt* root)
{
	if (root == NULL)
		return;
	stack<const bt*> s;
	const bt* p = root;
	s.push(p);
	while (!s.empty())
	{
		while (p->m_pLeft != NULL)
		{
			p = p->m_pLeft;
			s.push(p);
		}
		const bt* print = s.top();
		s.pop();
		cout << print->m_nValue << " ";
		if (print->m_pRight != NULL)
		{
			p = print->m_pRight;
			s.push(p);
		}
	}

}
void hx1(const bt* root)
{
	if (root == NULL)
		return;
	stack<const bt*> s;
	s.push(root);
	const bt* p = root;
	stack<int> flag;
	flag.push(1);
	while (!s.empty())
	{
		while (p->m_pLeft != NULL)
		{
			p = p->m_pLeft;
			s.push(p);
			flag.push(0);
		}

		if (p->m_pRight != NULL)
		{
			p = p->m_pRight;
			s.push(p);
			flag.push(1);
			continue;
		}
		const bt* print = s.top();
		cout << print->m_nValue << " ";
		s.pop();
		if (flag.top() == 0)//刚刚输出的是左节点
		{
			flag.pop();
			if (flag.empty())
				return;
			p = s.top();
			if (p->m_pRight != NULL)
			{
				p = p->m_pRight;
				s.push(p);
				flag.push(1);
			}
			else if (flag.top() == 1)
			{
				do {
					print = s.top();
					cout << print->m_nValue << " ";
					s.pop();
					flag.pop();
					if (flag.empty())
						return;
				} while (flag.top() == 1);
			}
		}
		else if (flag.top() == 1)
		{
			flag.pop();
			if (flag.empty())
				return;
			do {
				print = s.top();
				cout << print->m_nValue << " ";
				s.pop();
				flag.pop();
				if (flag.empty())
					return;
			} while (flag.top() == 1);
		}




	}
}
void hhx(const bt* root)
{
	if (root == NULL)
		return;
	stack<int> flag;
	stack<const bt*> s;
	s.push(root);
	flag.push(0);
	const bt* p = root;
	const bt* print = root;
	while (!s.empty())
	{
		while (p->m_pLeft != NULL)
		{
			p = p->m_pLeft;
			s.push(p);
			flag.push(0);
			print = p;
		}
		if (print->m_pRight != NULL)
		{
			p = print->m_pRight;
			print = p;
			s.push(p);
			flag.push(1);
		}
		else
		{
			if (flag.top() == 0)
			{
				flag.pop();
				print = s.top();
				cout << print->m_nValue << " ";
				s.pop();
				if (!s.empty())
					print = s.top();
			}
			else if (flag.top() == 1)
			{
				int i = 1;
				while (flag.top() == 1)
				{
					++i;
					flag.pop();
				}
				flag.pop();
				for (int j = 0; j < i; ++j) {
					print = s.top();
					cout << print->m_nValue << " ";
					s.pop();
					//do
					//{
					//print = s.top();
					//cout << print->m_nValue << " ";
					//s.pop(); flag.pop();
					if (!s.empty())
						print = s.top();
				}
			}
		}
	}

}
void hx(const bt* root)
{
	if (root == NULL)
		return;
	hx(root->m_pLeft);
	hx(root->m_pRight);
	cout << root->m_nValue << " ";
}