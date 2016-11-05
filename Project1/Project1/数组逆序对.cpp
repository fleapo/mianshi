#include <iostream>
using namespace std;
int InversePairsCore(int* data, int* copy, int start, int end)
{
	;
}
int InversePairs(int* data, int length)
{
	if (data == NULL || length < 0)
		return 0;
	int* copy = new int[length];
	for (int i = 0; i < length; ++i)
		copy[i] = data[i];
	int count = InversePairsCore(data, copy, 0, length - 1);
	delete[] copy;
	return count;
}
int main()
{
	int a[4] = { 7,5,6,4 };
	return 1;
}