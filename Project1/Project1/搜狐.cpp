#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int bushu(int m, int n)
{
	int now = m;
	for (int i = 1; i <= (m - n) / 2 + 1; ++i)
	{
		for (int j = 2; j <= now / 2; ++j)
		{
			if (now%j == 0)//j是约数
			{
				now += j;
				if (now == n)
					return i;
				else if (now < n)
					return i + bushu(now, n);
				else now -= j;
			}
		}
	}
	return -1;
}
int main21()
{
	int m, n;
	//cin >> m >> n;//m<n,求m到n的步数
	m = 4;
	n = 24;
	cout << bushu(m, n);
	return 0;

	
}