#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//判断素数

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;

	/*for (i = 100; i <= 200; i++)
	{
		//试除法，产生2->i-1
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d	", i);
		}
	}*/

	//优化 减少循环次数
	//也可当i为奇数时改为i+2，偶数除2外不为素数
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)	//j除以i开平方的整数后仍不能除尽，i为素数
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d	", i);
		}
	}

	printf("\ncount = %d\n", count);

	return 0;
}