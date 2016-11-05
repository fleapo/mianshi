#include <iostream>
#include <stdio.h>
using namespace std;
int partition(int arr[], int start, int end, int pivotIndex)
{
	int pivot = arr[pivotIndex];
	swap(arr[pivotIndex], arr[end]);
	int storeIndex = start;
	for (int i = start; i < end; ++i) {
		if (arr[i] < pivot) {
			swap(arr[i], arr[storeIndex]);
			++storeIndex;
		}
	}
	swap(arr[storeIndex], arr[end]);
	return storeIndex;
}
int mainyuanshunxu()
{
	//while (1)
	{
		int n, k;
		cin >> n >> k;

		int *a = new int[n];
		int *b = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			b[i] = a[i];
		}

		//int a[5] = { 1,5,4,7,3 };

		int start = 0;
		int end = n - 1;
		int index = partition(a, start, end, start);
		while (index != k )
		{
			if (index > k )
			{
				end = index - 1;
				index = partition(a, start, end, start);
			}
			else
			{
				start = index + 1;
				index = partition(a, start, end, start);
			}
		}
		//cout << index<<endl;
		//cout << a[index]<<endl;
		for (int i = 0; i < n; ++i)
		{
			if (b[i] < a[index])
			{
				cout << b[i] << endl;
			}
		}
	}
	return 1;

}