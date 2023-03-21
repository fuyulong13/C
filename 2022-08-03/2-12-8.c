#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int two(void)
{
	printf("two\n");
	return 0;
}

int one_three(viod)
{
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}

int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");

	getchar();
	return 0;
}