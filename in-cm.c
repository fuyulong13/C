// in-cm.c --��Ӣ��ת��Ϊ����
#include<stdio.h>
int main(void)
{
	double in, cm;

	printf("��������Ҫת����Ӣ����ֵ\n");
	scanf("%s", &in);
	cm = in*2.54;
	printf("%ldӢ�����%ld����\n", in, cm);

	system("pause");
	return 0;
}