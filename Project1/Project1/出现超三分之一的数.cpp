#include <iostream>
#include <vector>
using namespace std;
#define N 3
pair<int, int> majorityElement(const vector<int>& nums) {
	int m, n; //最多存在2个出现次数超过 1/3 的元素  
	int cm= 0, cn=0; //对应 m 和 n 的统计  
	for (auto num : nums) {
		if (cm == 0 || num == m) {
			m = num;
			++cm;
		}
		else if (cn == 0 || num == n) {
			n = num;
			++cn;
		}
		else {
			--cm;
			--cn;
		}
	}

	//若事先确定序列中存在超过1/3的元素，则无需验证，m一定是目标元素  
	//若不确定，则需要遍历一遍这个数组，统计其出现的次数，验证是否超过1/3  
	return make_pair(m, n);
}
int main13()
{
	vector<int> nums = { 1,1,3,3,5,6,7,8,9,2,4,11,12,15 };
	pair<int, int> aa= majorityElement(nums);
	cout << aa.first << endl << aa.second << endl;
	return 1;
}