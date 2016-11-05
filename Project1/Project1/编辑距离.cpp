#include <iostream>
#include <string>
using namespace std;
int min(int a, int b)
{
	return a > b ? b : a;
}
int JuLi(string str1, string str2)
{
	int s1 = str1.size();
	int s2 = str2.size();
	int **p = new int *[s1+1];//动态二维数组
	for (int i = 0; i < s1+1; i++)
	{
		p[i] = new int[s2+1];
	}
	for (int i = 0; i < s1 + 1; ++i)
	{
		p[i][0] = i;
	}
	for (int i = 0; i < s2 + 1; ++i)
	{
		p[0][i] = i;
	}
	for (int i = 1; i < s1+1; ++i)
	{
		for (int j = 1; j < s2+1; ++j)
		{
			p[i][j] = min(p[i][j-1]+1,p[i-1][j]+1);
			p[i][j] = min(p[i][j], p[i - 1][j - 1] + (str1[i - 1] == str2[j - 1] ? 0 : 1));
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
	return p[s1][s2];
}
int mainjuli()
{
	string str1 = "sailn";
	string str2 = "failing";
	cout << "----------" << endl;
	cout << JuLi(str1, str2) << endl;
	return 1;
}