#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//�ж��Ƿ�Ϊ�������Ƿ���1�����Ƿ���0
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)	//sprt(n)��n��ƽ�������ټ������
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	//��ӡ100��200֮�������
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж��Ƿ�Ϊ����
		if (is_prime(i) == 1)
			printf("%d ", i);
	}

	printf("\n");
	return 0;
}