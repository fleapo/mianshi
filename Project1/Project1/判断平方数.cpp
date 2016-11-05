#include<iostream>
using namespace std;
//利用1+3+5+7+9——是平方数
int  issqure(int   n)
//网上看到的NB代码
{
	int i = 1;
	for (; n>0; i += 2) n -= i;

	return 0 == n;
}
int mainf()
{
	while(1)
	{
		int n;
		cin >> n;
		int sum = 1; int i = 1;
		while (sum < n)
		{
			i +=2;
			sum += i;
		}
		if (sum == n)
			cout << "平方数";
		else
			cout << "不是";
	}
	return 1;
}