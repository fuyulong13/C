#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float input;
	printf("Enter a floating-pint value��");
	scanf("%f", &input);//��ȡ�û������룬�洢��input������
	printf("fixed-point notation:%f\n", input);//��ӡ��ͨ��ʽ��ת��˵����ʹ�� %f
	printf("exponential notation: %e\n", input);//��ӡָ����ʽ��ת��˵����ʹ�� %e
	printf("p notation: %a\n", input);//��ӡP��������ʽ��ת��˵����ʹ��%a
	system("pause");
	/*getchar();
	getchar();*/
	return 0;
}