#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int* p)
{
	(*p)++;//+�����ȼ�����
}
int main()
{
	int num = 0;
	Add(&num);	//�ı�ʵ�Σ���ַ����
	printf("num = %d\n", num);	//1
	Add(&num);
	printf("num = %d\n", num);	//2
	Add(&num);
	printf("num = %d\n", num);	//3
	return 0;
}