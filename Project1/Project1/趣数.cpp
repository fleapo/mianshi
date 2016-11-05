#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<char> ans;

string Qushu(string str,int num)
{
	int len = str.size();
	char c = str[0];
	int max = 0;
	for (int i = 0; i < len-num+1; ++i)
	{
		if (str[i] > c)
		{
			c = str[i];
			max = i;
		}
	}
	ans.push_back(c);
	if (num != 1)
	{
		Qushu(str.substr(max + 1, len - 1), num - 1);
	}
	return str;
}
int main2()
{
	string str;
	cin >> str;
	int n;
	cin >> n;
	Qushu(str, str.size()-n);
	for (auto i : ans)
		cout << i;
	return 0;
}