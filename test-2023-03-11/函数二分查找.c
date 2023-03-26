#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int binary_search(int arr[], int k,int sz)
{
	//算法实现
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;	//中间元素的下标
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;	//除上面两种外只有等于，不用在判断
		}
	}
	return -1;
}

int main()
{
	//二分查找
	//在一个有序数组中找具体的某个数
	//如果找到了，返回这个数的下标。找不到返回-1
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	//先算长度在传递过去，arr传递的是首元素的地址，无法在函数中算长度	
	int ret = binary_search(arr, k, sz);	
	
	if (-1 == ret)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}