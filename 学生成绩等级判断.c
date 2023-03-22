#include<stdio.h>
int main()
{
	int a;
	printf("输入学生成绩：");
	scanf("%d",&a);
	if(a>100||a<0)
		printf("数据无意义!\n");
	else
	switch(a/10)
	{
	case 10:
	case 9:printf("等级为A\n");break;
	case 8:printf("等级为B\n");break;
	case 7:printf("等级为C\n");break;
	case 6:printf("等级为D\n");break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("等级为E\n");break;
	}
	return 0;
}