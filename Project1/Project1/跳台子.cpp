#include <iostream>
using namespace std;
int maintiaotaizi()
{
	int a[999];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int now = 0;

	int ans = 0;
	while (now < n)
	{
		if (a[now] == 0)
		{ 
			cout << -1;
			return 0;
		}
			
		now = now + a[now];
		ans++;
	}
	if (now == n)
		cout << ans;
	else
		cout << -1;
	return 1;
}