// in-cm.c --把英寸转化为厘米
#include<stdio.h>
int main(void)
{
	double in, cm;

	printf("请输入需要转化的英寸数值\n");
	scanf("%s", &in);
	cm = in*2.54;
	printf("%ld英寸等于%ld厘米\n", in, cm);

	system("pause");
	return 0;
}