#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;

	for (i = 1; i <= 100; i++)//1-100
	{
		if (i % 10 == 9)	//��λΪ9
			count++;
		if (i / 10 == 9)	//ʮλΪ9
			count++;
	}

	//��9�������������ڵڶ��� if ǰ�� eles ����

	printf("count = %d\n", count);
	return 0;
}