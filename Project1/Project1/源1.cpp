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
	Q[r++] = n; dst[n] = 0;//Q��0����n
	for (; l < r; l++) {
		int x = Q[l];//��һ����x��n
		for (int i = 2; i * i <= x; i++) {//ѭ��С��n��������
			if (x % i == 0) {//���������n��Լ��ʱ
				if (x + i <= m && dst[x + i] == -1)//���ϲ���֮��С��m,����dst�����ӦֵΪ-1ʱ
					dst[x + i] = dst[x] + 1, Q[r++] = x + i;//��¼���������Ӧλ��
				if (x + x / i <= m && dst[x + x / i] == -1)//��һ��Լ����
					dst[x + x / i] = dst[x] + 1, Q[r++] = x + x / i;//��Ӧ��¼
			}
		}
	}
	cout << dst[m] << endl;
	return 0;
}