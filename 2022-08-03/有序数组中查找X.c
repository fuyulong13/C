#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int x, mid;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�

	printf("������һ��������");
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
			printf("����x, ���±�Ϊ%d\n",mid);
			break;//�ҵ�x������ѭ��
		}
	}
	if (left > right)
	{
		printf("x������\n");
	}

	system("pause");
	return 0;
}