#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//最大公约数
int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	printf("请输入两个正整数：\n");
	scanf("%d%d", &m, &n);
	
	while (r = m%n)
	{
		m = n;
		n = r;
	}

	printf("它们的最大公约数为：%d\n", n);

	return 0;
}
