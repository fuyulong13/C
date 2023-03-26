#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	Swap(&a, &b);//要改变实参，用指针，传址调用
	printf("交换后 a=%d b=%d\n", a, b);
	return 0;
}