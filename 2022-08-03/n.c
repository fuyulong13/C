#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//n�Ľ׳�
int main(void)
{
	int n;
	int i = 0;
	int ret = 1;
	int sum = 0;

	printf("������һ��С��13����������");//n��ֵ���� int �����޷���� ret
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	printf("\nn�Ľ׳�Ϊ��%d\n", ret);
	printf("1��n�׳�֮��Ϊ��%d\n", sum);

	getchar();
	getchar();
	return 0;
}