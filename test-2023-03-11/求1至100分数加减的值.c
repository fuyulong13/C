#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求1/1-1/2+1/3……+1/99-1/100的值
 
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;

	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;				//执行一次变号一次
	}

	printf("%lf\n", sum);
	return;
}