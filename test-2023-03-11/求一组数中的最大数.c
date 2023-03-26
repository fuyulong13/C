#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max = arr[0];	//max不能赋值为0，负数时出错，只能为数组中的值
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);	//求数组所含数字个数

	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
				max = arr[i];
		}
	}

	printf("max = %d\n", max);
	return 0;
}