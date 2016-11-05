#include <iostream>
#include <string>
#include <stack>
#include <cstring>
#include <iomanip>
using namespace std;
#define bt BinaryTreeNode
struct BinaryTreeNode
{
	int 			m_nValue;
	BinaryTreeNode*	m_pLeft;
	BinaryTreeNode* m_pRight;
};
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
		print = s.top();
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
			}
			else //if (flag.top() == 1)
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
void hxx(bt* root)
{
	if (root == NULL)
		return;
	stack<bt*> s;
	//pCur:当前访问节点，pLastVisit:上次访问节点
	bt* pCur, *pLastVisit;
	//pCur = root;
	pCur = root;
	pLastVisit = NULL;
	//先把pCur移动到左子树最下边
	while (pCur)
	{
		s.push(pCur);
		pCur = pCur->m_pLeft;
	}
	while (!s.empty())
	{
		//走到这里，pCur都是空，并已经遍历到左子树底端(看成扩充二叉树，则空，亦是某棵树的左孩子)
		pCur = s.top();
		s.pop();
		//一个根节点被访问的前提是：无右子树或右子树已被访问过
		if (pCur->m_pLeft == NULL || pCur->m_pLeft == pLastVisit)
		{
			cout << setw(4) << pCur->m_nValue;
			//修改最近被访问的节点
			pLastVisit = pCur;
		}
		/*这里的else语句可换成带条件的else if:
		else if (pCur->lchild == pLastVisit)//若左子树刚被访问过，则需先进入右子树(根节点需再次入栈)
		因为：上面的条件没通过就一定是下面的条件满足。仔细想想！
		*/
		else
		{
			//根节点再次入栈
			s.push(pCur);
			//进入右子树，且可肯定右子树一定不为空
			pCur = pCur->m_pRight;
			while (pCur)
			{
				s.push(pCur);
				pCur = pCur->m_pLeft;
			}
		}
	}
	cout << endl;
}
int mainercha()
{
	int preorder[15] = { 8,4,2,1,3,6,5,7,12,10,9,11,14,13,15 }; 
	int preorder1[15] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	int preorder2[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	//{ 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	//{ 1,2,4,7,3,5,6,8 };
	int inorder[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	BinaryTreeNode* Tree = Construct(preorder1, inorder, 15);
	// cout << "-----------------------" <<endl;
	// cout << Tree->m_nValue << endl;
	// cout << Tree->m_pLeft->m_nValue << Tree->m_pRight->m_nValue << endl;
	// cout << Tree->m_pLeft->m_pLeft->m_nValue << Tree->m_pRight->m_pLeft->m_nValue << Tree->m_pRight->m_pRight->m_nValue <<endl;
	// cout << Tree->m_pLeft->m_pLeft->m_pRight->m_nValue << Tree->m_pRight->m_pRight->m_pLeft->m_nValue;
	//cout << "递归前序遍历" << endl;
	//qx(Tree); cout << endl;
	//cout << "非递归前序遍历" << endl;
	//qqx(Tree); cout << endl;
	//cout << "递归中序遍历" << endl;
	//zx(Tree); cout << endl;
	//cout << "非递归中序遍历" << endl;
	//zzx(Tree); cout << endl;
	cout << "递归后序遍历" << endl;
	hx(Tree); cout << endl;
	cout << "非递归后序遍历" << endl;
	hhx(Tree); cout << endl;
	cout << "非递归后序遍历2" << endl;
	hxx(Tree); cout << endl;
	cout << endl;
	return 1;
}
