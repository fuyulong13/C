#define _CRT_SECURE_NO_WARNINGS 1
//�����µı����ϰһ
#include<stdio.h>
#include<float.h>
#include<limits.h>
int main(void)
{
	int big_int = 2147483647;
	//�з��������������ֵһ����2��31�η���1
	float big_float = 3.4e38;
	//���������������ֵһ��Ϊ 3.4E38
	float small_float = 10.0 / 3;
	//���������ݵ���Чλ��Ϊ6λ
	printf("The big int data is %d\n", big_int + 1);
	//�����������ֵ�� 1�������Խ�磬���Ϊ -2147483648
	printf("The big float data is %f\n", big_float * 10);
	/*������������ݳ�10���Խ�磬��� inf�������������
	ֻ��1��С���ݣ������侫ȷ�����ƣ��������Խ��*/
	printf("The big float data is %f\n", small_float);
	//��ӡ3.333333��������ʧ
	printf("The MAX float data is %f\n", FLT_MAX);
	//��ӡ34028234663852885981174183484516925440.000000
	printf("The MAX int data is %d\n", INT_MAX);
	//��ӡ2147483647
	getchar();
	return 0;
}