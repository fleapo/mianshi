#include <set>
#include "btree.h"
using namespace std;
extern void qx(BinaryTreeNode* root);
bt * construct(int* pre, int* mid, int length)
{
	if (length == 0)
		return NULL;
	bt* temp = new bt;
	temp->m_nValue = pre[0];
	int n=0;
	for (int i = 0; i < length; ++i)
	{
		if (mid[i] != pre[0])
			++n;
		else
			break;
	}
	int m = length - n - 1;
	temp->m_pLeft = construct(pre + 1, mid, n);
	temp->m_pRight = construct(pre + n + 1, mid + n + 1, m);
	return temp;
}
int mainchongjianerchashu()
{
	int pre[5] = { 7,4,3,5,8 };
	int mid[5] = { 3,4,5,7,8 };
	bt* root = construct(pre, mid, 5);
	qx(root);
	return 1;
}