#include<stdio.h>
int main()
{
	int a;
	printf("����ѧ���ɼ���");
	scanf("%d",&a);
	if(a>100||a<0)
		printf("����������!\n");
	else
	switch(a/10)
	{
	case 10:
	case 9:printf("�ȼ�ΪA\n");break;
	case 8:printf("�ȼ�ΪB\n");break;
	case 7:printf("�ȼ�ΪC\n");break;
	case 6:printf("�ȼ�ΪD\n");break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("�ȼ�ΪE\n");break;
	}
	return 0;
}