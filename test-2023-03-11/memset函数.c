#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[] = "hello world";
	memset(arr, '-', 5);		//��arr�ڴ���ǰ5���ֽڵ�ֵָ��Ϊ-
	printf("%s\n", arr);
	return 0;
}