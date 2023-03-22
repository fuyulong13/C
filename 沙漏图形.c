#include<stdio.h>
int main()
{
	int i,n,a,v;
	printf("请输入所需长度:");
	scanf("%d",&a);   //输入上半部分行数//
	for(i=0;i<a;i++)
	{
		for(n=0;n<i;n++)
		{
			printf(" ");
		}
		for(v=0;v<2*(a-i)-1;v++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<a-1;i++)//a-1为下半部分行数//
	{
		for(n=0;n<a-2-i;n++)
		{
			printf(" ");
		}
		for(v=0;v<2*i+3;v++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

