#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//判断是否为素数，是返回1，不是返回0
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)	//sprt(n)，n开平方，减少计算次数
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	//打印100—200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断是否为素数
		if (is_prime(i) == 1)
			printf("%d ", i);
	}

	printf("\n");
	return 0;
}