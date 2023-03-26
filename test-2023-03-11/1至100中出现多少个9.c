#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;

	for (i = 1; i <= 100; i++)//1-100
	{
		if (i % 10 == 9)	//个位为9
			count++;
		if (i / 10 == 9)	//十位为9
			count++;
	}

	//求含9的整数个数则在第二个 if 前加 eles 除重

	printf("count = %d\n", count);
	return 0;
}