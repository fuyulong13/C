#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int x, mid;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标

	printf("请输入一个整数：");
	scanf("%d", &x);

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > x)
		{
			right = mid - 1;
		}
		else if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else if (arr[mid] = x)
		{
			printf("存在x, 其下标为%d\n",mid);
			break;//找到x后跳出循环
		}
	}
	if (left > right)
	{
		printf("x不存在\n");
	}

	system("pause");
	return 0;
}