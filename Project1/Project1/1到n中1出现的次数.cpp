#include <iostream>
#include <cmath>
using namespace std;
int count1(int n)
{
	if (n < 10)
		return 1;
	int sum = 0;
	int high=n;//最高位
	int flag=0;//位数-1
	while (high > 9)
	{
		high = high / 10;
		flag++;
	}
	/////////////////

	/////////////////
	if (high == 1)
	{
		sum += n - pow(10 , flag);
		sum += (flag)*pow(10 , (flag-1));
		sum += count1(n - pow(10 , flag));
	}
	else
	{
		sum += high*(flag)*pow(10 , (flag - 1))+pow(10,flag);
		sum += count1(n - high*pow(10 , flag));
	}
	return sum;
}
int main1chuxiancishu()
{
	int n = 99999999;
	//cout << pow(5 , 3);
	cout << count1(n) << endl;
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		int t = i;
		while (t)
		{
			if (t % 10 == 1)
				sum++;
			t /= 10;

		}
	}
	cout << sum << endl;
	return 1;
}