//求出原序列变为有序过程中存在的环
//求法：将序列以及序列的变化记在图中，在图中找环
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int timesOfChange(vector<int> &nums)
{
	int n = nums.size();
	if (n < 2) return 0;
	vector<bool> right_place_flag(n);
	vector<int> sorted_nums(n);

	copy(nums.begin(), nums.end(), sorted_nums.begin());
	sort(sorted_nums.begin(), sorted_nums.end());
	for (int i = 0; i < n; ++i)
		if (nums[i] != sorted_nums[i])
			right_place_flag[i] = false;
		else
			right_place_flag[i] = true;
	int p = 0, q;
	int minimumswap = 0;
	while (1)
	{
		while (p < n)
			if (right_place_flag[p])
				++p;
			else
				break;
		if (p == n)
			break;
		q = p + 1;
		while (q < n)
		{
			if (!right_place_flag[q] && sorted_nums[q] == nums[p])
				break;
			++q;
		}
		if (q >= n)
			break;
		right_place_flag[q] = true;
		if (nums[q] == sorted_nums[p])
			right_place_flag[q] = true;
		swap(nums[p], nums[q]);
		++minimumswap;
	}
	return minimumswap;
}
int main()
{
	vector<int> pre = { 2,3,1,5,4 };
	cout << timesOfChange(pre) << endl;
	vector<int> pre1 = { 5,4,3,2,1 };
	cout << timesOfChange(pre1) << endl;
	vector<int> pre2 = { 1,2,3,4,5 };
	cout << timesOfChange(pre2) << endl;
	return 1;
}