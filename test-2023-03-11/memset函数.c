#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[] = "hello world";
	memset(arr, '-', 5);		//将arr内存块的前5个字节的值指定为-
	printf("%s\n", arr);
	return 0;
}