#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MASS_PER_MOLE 3.0e-32
#define MASS_PER_QUART 950

int main(void)
{
	float quart, quantity;
	printf("Enter how many quart:");
	scanf("%f", &quart);
	quantity = quart * MASS_PER_QUART/MASS_PER_MOLE;//计算水分子数量
	printf("There are %e molecule.\n", quantity);
	system("pause");
	return 0;

}