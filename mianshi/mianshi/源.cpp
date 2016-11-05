#include <iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>

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
int main5_3()
{
	int a = 0;
	if ('A' == a) //可第一时间找到错误，因为常亮不能作为左值
	{
		a++;
	}
	if (a == 'A')
	{
		a++;
	}
	int i, X = 0, Y = 0, J = 0, S = 0;
	for (i = 0; i < 8; i++)
	{
		X = i + Y + J * 7;
		printf("%d", X);
	}
	{
		S = Y + J * 7;//最好把与循环无关的量在循环外求出
		for (i = 0; i < 8; i++)
		{
			printf("%d", i + S);
		}
	}
	return 9;
}
int main5_4_1()
{
	unsigned char a = 0xA5;
	unsigned char b = ~a >> 4;//>>优先级更高，先右移4位，再取反
	//cout << b;
	printf("b=%d\n", a);
	return 0;
}
int main5_4_2()
{
	float a = 1.0f;
	cout << int(a) << endl;//1
	cout << &a << endl;//a的地址
	cout << (int&)a << endl;
	cout << boolalpha << ((int)a == (int&)a) << endl;
	float b = 0.0f;
	cout << (int&)b << endl;
	cout << &b << endl;
	cout << (int&)b << endl;
	cout << boolalpha << ((int)b == (int&)b) << endl;
	return 0;

}
int main5_4_3()
{

}
int main5_4_3()
{

}