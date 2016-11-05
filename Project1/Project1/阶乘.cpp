#include <iostream>
int mainjiecheng()
{
	double a[9999];
	a[0] = 1;
	for (int i = 1; i < 9999; ++i)
	{
		a[i] = i*a[i - 1];
	}
	double sum = 0;
	for (int i = 1; i < 9990; ++i)
	{
		sum += (i + 2) / (a[i + 3]);
	}
	std::cout << sum;
	return 1;
}