#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()			//��Ϸѡ��
{
	printf("*******************************************\n");
	printf("****    1. play    0. exit             ****\n");
	printf("*******************************************\n");
}

void game()		   //��Ϸ����
{
	//����һ�������
	int ret = 0;
	int guess = 0;//���ܲµ�����
	ret = rand()%100+1;//�����������ΧΪ0-32767 ����С��1-100
    printf("���1��100֮���һ�����֣�>");
	//������
	while (1)
	{
		scanf("%d", &guess);

		if (guess > ret)
		{
			printf("�´��ˣ�������\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ�������\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	//��ʱ��������������������㣬ȷ����ʼ��ͬ����������ͬ
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}