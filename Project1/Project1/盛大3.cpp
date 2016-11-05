#include <iostream>
using namespace std;
int mainshengda()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int L;
		cin >> L;
		int a = 0;
		int temp1, temp2;
		for (int j = 0; j < L; ++j)
		{
			cin >> temp1 >> temp2;
			a += temp1*temp2;
		}
		cout << 36 * 36 / a << " " << 36 * 36 * 2 / a << " " << 36 * 36 * 3 / a << endl;
	}
	return 1;
}