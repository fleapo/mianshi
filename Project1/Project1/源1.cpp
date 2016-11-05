#include <iostream>
#include <cstdio>

using namespace std;

const int maxn = 130000;
int dst[maxn + 5], Q[maxn + 5], l, r;
int main2() {
	int m, n;
	cin >> n >> m;
	for (int i = 0; i < maxn; i++) dst[i] = -1;
	l = r = 0;
	Q[r++] = n; dst[n] = 0;//Q【0】是n
	for (; l < r; l++) {
		int x = Q[l];//第一步，x是n
		for (int i = 2; i * i <= x; i++) {//循环小于n的所有数
			if (x % i == 0) {//当这个数是n的约数时
				if (x + i <= m && dst[x + i] == -1)//加上步数之后小于m,而且dst数组对应值为-1时
					dst[x + i] = dst[x] + 1, Q[r++] = x + i;//记录两个数组对应位置
				if (x + x / i <= m && dst[x + x / i] == -1)//另一个约数，
					dst[x + x / i] = dst[x] + 1, Q[r++] = x + x / i;//相应记录
			}
		}
	}
	cout << dst[m] << endl;
	return 0;
}