#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//�ж�����

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;

	/*for (i = 100; i <= 200; i++)
	{
		//�Գ���������2->i-1
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

	//�Ż� ����ѭ������
	//Ҳ�ɵ�iΪ����ʱ��Ϊi+2��ż����2�ⲻΪ����
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)	//j����i��ƽ�����������Բ��ܳ�����iΪ����
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