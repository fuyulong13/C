#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//n的阶乘
int main(void)
{
	int n;
	int i = 0;
	int ret = 1;
	int sum = 0;

	printf("请输入一个小于13的正整数：");//n的值过大 int 类型无法存放 ret
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	printf("\nn的阶乘为：%d\n", ret);
	printf("1至n阶乘之和为；%d\n", sum);

	getchar();
	getchar();
	return 0;
}