#include <iostream>
using namespace std;
#define N 3
int mainxuanzhuanshuzi()
{
	//int a[2][3][3] = { 5,6,9,1,4,7,5,7,1,9,4,8,6,2,7,8,1,6 };
	//for (int i = 0; i < 18; ++i)
		//cout << *((int*)a + i)<<endl;
	//int a[6] = { 0,2,4,6,8,10 };
	//cout << "*(a + 1): "<<*(a + 1)<<endl;
	//cout << "*((int*)(&a + 1)-1): " << *((int*)(&a + 1) - 1)<<endl;
	int a[N][N] = {1,2,3,4,5,6,7,8,9};
	int b[N][N];
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			b[j][i] = a[i][N-1 - j];
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			cout << b[i][j]<<endl;
	return 1;
}