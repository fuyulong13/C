#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���Լ��
int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	printf("������������������\n");
	scanf("%d%d", &m, &n);
	
	while (r = m%n)
	{
		m = n;
		n = r;
	}

	printf("���ǵ����Լ��Ϊ��%d\n", n);

	return 0;
}
