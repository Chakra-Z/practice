#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n, i;
	for (n = 1; n <= 200; n++)
	{
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n%i == 0)break;//整数时跳出
		}
		if (i > sqrt(n))
			printf("%d ", n);
	}
	system("pause");
	return 0;
}// 打印100~200之间的素数 


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%d\t", j, i, i*j);
		printf("\n");
	}
	system("pause");
	return 0;
}//输出乘法口诀表


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//闰年判断方式((year%4==0&&year%100!=0)||(year%400==0))
		{
			printf("%d ", year);
		}
	system("pause");
	return 0;
}//判断1000年-- - 2000年之间的闰年