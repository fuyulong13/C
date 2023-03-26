#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a ;
	int b ;
	int sum = 0;

	printf("请输入两个整数:\n");
	scanf("%d%d", &a, &b);
	sum = Add(a, b);
	printf("sum = %d\n", sum);

	return 0;
}