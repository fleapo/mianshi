#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1501  

/**
* ����3�����е���Сֵ
* @param long long a  ��һ����
* @param long long b  �ڶ�����
* @param long long c  ��������
* @return long long  �������е���Сֵ
*/
long long getMinOfThreeNumbers(long long a, long long b, long long c)
{
	long long min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return min;
}

/**
* ��ȡǰn������
* @param longlong uglyNumber[] ���ڴ�ų���������
* @return void;
*/
void getUglyNumbers(long long uglyNumber[], int n)
{
	int i;
	int indexOfUglyNumber = 1;          // ���������Ӧ���±�  
	int indexOfTwo = 1;                 // ��2��Ӧ�ĳ������ڳ��������е��±�  
	int indexOfThree = 1;               // ��3��Ӧ�ĳ������ڳ��������е��±�  
	int indexOfFive = 1;                // ��5��Ӧ�ĳ������ڳ��������е��±�  
	long long curUglyNumber;            // ��ǰ���ɵĳ���  
	long long curUglyNumberOfTwo;       // ����2��˵õ��ĳ���  
	long long curUglyNumberOfThreee;    // ����3��˵õ��ĳ���  
	long long curUglyNumberOfFive;      // ����5��˵õ��ĳ���  
	uglyNumber[1] = 1;                  // ��1��������1  
	for (i = 2; i <= 1500; i++)
	{
		curUglyNumberOfTwo = 2 * uglyNumber[indexOfTwo];
		curUglyNumberOfThreee = 3 * uglyNumber[indexOfThree];
		curUglyNumberOfFive = 5 * uglyNumber[indexOfFive];
		// �ӵ�ǰ3����ѡ�У�ѡ����С��һ����Ϊ�µĳ���  
		curUglyNumber = getMinOfThreeNumbers(curUglyNumberOfTwo, curUglyNumberOfThreee, curUglyNumberOfFive);
		uglyNumber[++indexOfUglyNumber] = curUglyNumber;
		// ���¸����������±�  
		while (2 * uglyNumber[indexOfTwo] <= curUglyNumber)
		{
			indexOfTwo++;
		}
		while (3 * uglyNumber[indexOfThree] <= curUglyNumber)
		{
			indexOfThree++;
		}
		while (5 * uglyNumber[indexOfFive] <= curUglyNumber)
		{
			indexOfFive++;
		}

	}
}

/**
*  ��ӡ��n������
*  @param long long uglyNumber[]  �洢����������
*  @param int n  n��ʾ��ӡ��n������
*  @return void
*/
void printNthUglyNumber(long long uglyNumber[], int n)
{
	printf("%lld\n", uglyNumber[n]);
}

int mainchoushu()
{
	long long uglyNumber[MAX];             // ��ų���  
	int n;
	getUglyNumbers(uglyNumber, 1500);       // ��ȡǰ1500������  
	while (EOF != scanf("%d", &n))
	{
		printNthUglyNumber(uglyNumber, n);
	}
	return 0;
}