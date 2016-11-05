#include <iostream>
#include <vector>
using namespace std;
#define N 3
pair<int, int> majorityElement(const vector<int>& nums) {
	int m, n; //������2�����ִ������� 1/3 ��Ԫ��  
	int cm= 0, cn=0; //��Ӧ m �� n ��ͳ��  
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

	//������ȷ�������д��ڳ���1/3��Ԫ�أ���������֤��mһ����Ŀ��Ԫ��  
	//����ȷ��������Ҫ����һ��������飬ͳ������ֵĴ�������֤�Ƿ񳬹�1/3  
	return make_pair(m, n);
}
int main13()
{
	vector<int> nums = { 1,1,3,3,5,6,7,8,9,2,4,11,12,15 };
	pair<int, int> aa= majorityElement(nums);
	cout << aa.first << endl << aa.second << endl;
	return 1;
}