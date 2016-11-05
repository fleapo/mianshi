#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void f(const int &i)
{
	cout << i << endl;
}
void prin(int(&a)[11])
{
	for (auto i : a)
		cout << i << endl;
}
int mainyinyongconst(int argc, char *argv[])
{
	f(3399);
	vector<int> i(3);
	cout << i.size();
	int a[11] = { 0 };
	prin(a);
	cout << argc << endl << argv[0] << endl;
	typedef string* pstring;
	//const pstring cstr;
	void(*pp)(const int &);
	pp = f;
	cout << sizeof(pp) << endl;
	return 1;
}