#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int binary_search(int arr[], int k,int sz)
{
	//�㷨ʵ��
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;	//�м�Ԫ�ص��±�
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
			return mid;	//������������ֻ�е��ڣ��������ж�
		}
	}
	return -1;
}

int main()
{
	//���ֲ���
	//��һ�������������Ҿ����ĳ����
	//����ҵ��ˣ�������������±ꡣ�Ҳ�������-1
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	//���㳤���ڴ��ݹ�ȥ��arr���ݵ�����Ԫ�صĵ�ַ���޷��ں������㳤��	
	int ret = binary_search(arr, k, sz);	
	
	if (-1 == ret)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}