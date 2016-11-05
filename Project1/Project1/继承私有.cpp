#include <iostream>
using namespace std;
class Test
{
private:
	int m_i;
public:
	Test() :m_i(0) {}
	int get()
	{
		return m_i;
	}
	Test(int i = 0)
	{
		m_i = i;
		cout << i;
	}
	Test(const Test&x)
	{
		cout << 2;
	}
	Test &operator=(const Test& x)
	{
		cout << (*this).get();
		return *this;
	}
	~Test()
	{
		cout << 4;
	}
};
bool isPowOf2(int n)
{
	int i = 1;
	while ((i *= 2) < n)
	{

	}
	if (i == n)
		return true;
	return false;
}
int mainjichengsiyou()
{
	//Test obj1(0), obj2(2), obj3(obj1);
	//obj1 = obj2;
	cout << isPowOf2(1) << isPowOf2(2) << isPowOf2(12) << isPowOf2(4) << isPowOf2(1023) << isPowOf2(1024);
	return 1;

}