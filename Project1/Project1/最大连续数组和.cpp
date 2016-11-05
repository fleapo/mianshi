#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <cstring>
using namespace std;
int mainzuidalianxuzishuzu()
{
	int a[] = { 1,-2,3,10,-4,7,2,-5,-20,31 };
	int count = sizeof(a) / 4;
	cout << count<<endl;
	int max = a[0];
	int f = a[0];
	for (int i = 1; i < count; ++i)
	{
		if (f <= 0)
		{
			cout<<"\t"<<(f=a[i])<<endl;
		}
		else
		{
			cout<<(f += a[i])<<endl;
		}
		max = (max > f ? max : f);
	}
	cout << endl<<max;
	return 1;
}