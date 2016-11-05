#include <stdio.h>
#include <iostream>
//int main() { char q = 34, n = 10, *a = "int main() {char q=34,n=10,*a=%c%s%c;printf(a,q,a,q,n);}%c"; printf(a, q, a, q, n); }
using namespace std;
int main1233()
{
	while (1)
	{
		int n, m;
		cin >> n >> m;
		if (n < 1 || m < 1)
		{
			cout << "num error" << endl;
		}
		int ans = 0;
		for (int i = 1; i < n; ++i)
		{
			ans = (ans + m) % (i + 1);
		}
		cout << ans << endl;
	}
	return 1;
}