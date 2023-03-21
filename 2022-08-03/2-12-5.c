#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int br(void)
{
	printf ("Brazil, Russia");
	return 0;
}

int ic(viod)
{
	printf ("India, China");
	return 0;
}

int main()
{
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(", \n");
	br();
	getchar();
	return 0;
}