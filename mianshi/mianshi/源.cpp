#include <iostream>
using namespace std;
int main1()
{
	int x = 2, y, z;
	x *= (y = z = 5);//2*5=10
	cout << x << endl;
	z = 3;
	x == (y = z);
	cout << x << endl;//10
	x = (y == z);//y=3 z=3
	cout << x << endl;//1
	x = (y&z);//按位与 11   11
	cout << x << endl;//3
	x = (y&&z);//求与
	cout << x << endl;//1
	y = 4;
	x = (y | z);//按位或100 11
	cout << x << endl;//111 7
	x = (y || z);//真
	cout << x << endl;//1
	return 0;//10.10.0.1.1.1
}
int Vac = 3;
int main2()
{
	int Vac = 10;
	::Vac++;
	cout << ::Vac << endl;
	cout << Vac << endl;
	return 0;
}
void main3_1()
{
	int a, x;
	for (a = 0, x = 0; a <= 1 && !x++; a++)
	{
		a++;
	}
	cout << a << x << endl;//2.1
}
void main3_2()
{
	int a, x;
	for (a = 0, x = 0; a <= 1 && !x++;)
	{
		a++;
	}
	cout << a << x << endl;//1.2
}
