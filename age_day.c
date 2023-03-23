//#define _CRT_SECURE_NO_WARNINGS 1
// age_day.c --年龄转化为天数（不考虑闰年)
#include<stdio.h>
#define DAYS_PER_YEAR 365
int main()
{
	int age, days;

	printf("Please enter your age:\n");
	scanf("%d", &age);
	printf("Your age is %d.\n", age);
	days = age * DAYS_PER_YEAR;
	printf("It's %d days.\n",days);

	//getchar();
	return 0;
}