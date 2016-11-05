#include "btree.h"
int mainbtre()
{
	int preorder[15] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
	//{8,4,2,1,3,6,5,7,12,10,9,11,14,13,15};
	//{ 1,2,4,7,3,5,6,8 };
	int inorder[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	BinaryTreeNode* Tree = Construct(preorder, inorder, 15);
	// cout << "-----------------------" <<endl;
	// cout << Tree->m_nValue << endl;
	// cout << Tree->m_pLeft->m_nValue << Tree->m_pRight->m_nValue << endl;
	// cout << Tree->m_pLeft->m_pLeft->m_nValue << Tree->m_pRight->m_pLeft->m_nValue << Tree->m_pRight->m_pRight->m_nValue <<endl;
	// cout << Tree->m_pLeft->m_pLeft->m_pRight->m_nValue << Tree->m_pRight->m_pRight->m_pLeft->m_nValue;
	//cout << "µÝ¹éÇ°Ðò±éÀú" << endl;
	//qx(Tree); cout << endl;
	//cout << "·ÇµÝ¹éÇ°Ðò±éÀú" << endl;
	//qqx(Tree); cout << endl;
	//cout << "µÝ¹éÖÐÐò±éÀú" << endl;
	//zx(Tree); cout << endl;
	//cout << "·ÇµÝ¹éÖÐÐò±éÀú" << endl;
	//zzx(Tree); cout << endl;
	//cout << "µÝ¹éºóÐò±éÀú" << endl;
	//hx(Tree); cout << endl;
	//cout << "·ÇµÝ¹éºóÐò±éÀú" << endl;
	//hhx(Tree); cout << endl;
	//cout << endl;
	return 1;
}