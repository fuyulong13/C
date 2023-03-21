#define _CRT_SECURE_NO_WARNINGS 1
//第三章的编程练习一
#include<stdio.h>
#include<float.h>
#include<limits.h>
int main(void)
{
	int big_int = 2147483647;
	//有符号整型数据最大值一般是2的31次方减1
	float big_float = 3.4e38;
	//浮点型整数的最大值一般为 3.4E38
	float small_float = 10.0 / 3;
	//浮点型数据的有效位数为6位
	printf("The big int data is %d\n", big_int + 1);
	//整型数据最大值加 1，会造成越界，结果为 -2147483648
	printf("The big float data is %f\n", big_float * 10);
	/*浮点型最大数据乘10造成越界，输出 inf。如果浮点数据
	只加1个小数据，由于其精确度限制，不会造成越界*/
	printf("The big float data is %f\n", small_float);
	//打印3.333333，精度损失
	printf("The MAX float data is %f\n", FLT_MAX);
	//打印34028234663852885981174183484516925440.000000
	printf("The MAX int data is %d\n", INT_MAX);
	//打印2147483647
	getchar();
	return 0;
}