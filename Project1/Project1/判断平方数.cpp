#include<iostream>
using namespace std;
//����1+3+5+7+9������ƽ����
int  issqure(int   n)
//���Ͽ�����NB����
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
			cout << "ƽ����";
		else
			cout << "����";
	}
	return 1;
}