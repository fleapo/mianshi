#pragma once
#ifndef btree
#define btree
using namespace std;
#include "tou.h"
#define bt BinaryTreeNode
extern BinaryTreeNode* Construct(int* preorder, int* inorder, int length);
extern void qx(BinaryTreeNode* root);
extern void qqx(const bt* root);
extern void zx(const bt* root);
extern void zzx(const bt* root);
extern void hx1(const bt* root);
extern void hhx(const bt* root);
extern void hx(const bt* root);

#endif // !erchashu