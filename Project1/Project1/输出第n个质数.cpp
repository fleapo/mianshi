#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
using namespace std;
bool Isz(int n)
{
	if (n == 1 || n == 2)
		return true;
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
int main1233212()
{
	while (1)
	{
		int n;
		cin >> n;
		int j = 1;
		for (int i = 1; i <= n; ++i)
		{
			while (!Isz(j++))
			{
				;
			}

		}
		cout << j - 1;
	}
	return 0;
}