#include <vector>
#include <iostream>
using namespace std;
int mainrognqi()
{
	vector<int> a;
	a.push_back(0);
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	vector<int>* p = &a;
	cout << (*p)[1];
	return 1;
}