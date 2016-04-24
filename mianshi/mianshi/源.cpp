#include <iostream>
using namespace std;
int main5_1_1()
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
int main5_1_2()
{
	int Vac = 10;
	::Vac++;
	cout << ::Vac << endl;
	cout << Vac << endl;
	return 0;
}
void main5_2_1_1()
{
	int a, x;
	for (a = 0, x = 0; a <= 1 && !x++; a++)
	{
		a++;
	}
	cout << a << x << endl;//2.1
}
void main5_2_1_2()
{
	int a, x;
	for (a = 0, x = 0; a <= 1 && !x++;)
	{
		a++;
	}
	cout << a << x << endl;//1.2
}
void main5_2_2()
{
	int b = 3;
	int arr[] = { 6,7,8,9,10 };
	int *ptr = arr;
	*(ptr++) += 123;//不是*(ptr++)=*(ptr++)+123;而是*ptr=*ptr+123;ptr++;<>"<>"为重点
	printf("%d,%d\n", *ptr, *(++ptr));//printf从右到左压栈，先算*(++ptr),再算*ptr，其实是一个数，必然输出相等
}
//int main5_2_1()
//{
//	int a = 1;
//	a++ += 1;
//	cout << a << endl;
//	return 0;
//}