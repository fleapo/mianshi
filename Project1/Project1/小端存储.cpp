#include <stdio.h>
#include <iostream>
using namespace std;
int swap(int x)
{
	return (((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1));
}
int mainswap()
{
	long long a = 1, b = 2, c = 3;
	printf("%d %d %d", a, b, c);
	int x = 0x8FFF0000;
	cout << x << endl << (x << 1) << endl;

	int ai = 35278;
	cout << swap(ai) << endl;
	return 1;

}