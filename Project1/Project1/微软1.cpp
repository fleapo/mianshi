#include <iostream>
#include <cmath>
using namespace std;
int mainms()
{
	int n;
	cin >> n;
	long long k;
	int ans = 0;
	int oushu = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		if (k & 1)
			++ans;
		else
			--ans;

	}
	ans = abs(ans);
	cout << ans;
	return 1;
}