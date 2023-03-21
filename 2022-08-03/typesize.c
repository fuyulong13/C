#define _CRT_SECURE_NO_WARNINGS 1
//typesize.c -- 打印类型大小
#include<stdio.h>
int main(void)
{
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type short has a size of %zd bytes.\n", sizeof(short));
	printf("Type float has a size of %zd bytes.\n", sizeof(float));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("Type double has a size of %zd bytes.\n", sizeof(double));
	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

	system("pause");
	return 0;
}