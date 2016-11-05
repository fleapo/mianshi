#include <iostream>
using namespace std;
int main1()
{
	long n;
	while (cin >> n)
	{
		long long sum = 0;
		while (n)
		{
			if (n % 2 == 1)
			{
				sum += n;
				--n;
			}
			else
			{
				sum += n / 2 * n / 2;
				n /= 2;
			}
		}
		cout << sum << endl;

	}
	return 0;
}