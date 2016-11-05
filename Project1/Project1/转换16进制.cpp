#include <iostream>
#include <string>
using namespace std;
string toHex(unsigned int num)
{
	char ans[8] = { '0','0','0','0','0','0','0','0' };
	//int n;
	int flag = 7;
	int b;
	string re = "";
	if (num > 0)
	{
		//cin >> n;
		while (num)
		{
			char b = num % 16;
			if (b > 9)
			{
				b = b - 10 + 'a';
			}
			else
			{
				b = b - 0 + '0';
			}
			ans[flag--] = b;
			num = num / 16;
		}
		for (int i = 0; i < 8; ++i)
		{
			if (ans[i] != '0')
			{
				for (int j = i; j < 8; ++j)
					re += ans[j];
				break;
			}
			//if (i == 7)
			//	return "0";
		}
	}
	else
		re="0";
	return re;
}
int mainzhuan16()
{
	cout << toHex(0) << endl;
	int n1 = -1;
	unsigned int n2 = n1;
	n1 = n2;
	cout << n2 << endl;
	return 1;
}