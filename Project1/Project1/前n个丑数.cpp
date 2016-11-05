#include <iostream>
using namespace std;
int mainchoushu()
{
	int n = 10;
	int num = 0;
	int t2 = 0, t3 = 0, t5 = 0;
	int i = 1;
		while(num<n)
	{
		t2 = (t2 + 1) % 2;
		t3 = (t3 + 1) % 3;
		t5 = (t5 + 1) % 5;
		//if (t2 = 1)
		//	t2 = 0;
		//else
		//	++t2;
		//if (t3 = 2)
		//	t3 = 0;
		//else
		//	++t3;
		//if (t5 = 4)
		//	t5 = 0;
		//else
		//	++t5;
		if (!(t2&&t3&&t5))
		{
			cout << i << endl;
			++num;
		}
		++i;
	}
		return 1;
}