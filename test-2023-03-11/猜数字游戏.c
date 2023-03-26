#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()			//游戏选项
{
	printf("*******************************************\n");
	printf("****    1. play    0. exit             ****\n");
	printf("*******************************************\n");
}

void game()		   //游戏机制
{
	//生成一个随机数
	int ret = 0;
	int guess = 0;//接受猜的数字
	ret = rand()%100+1;//生成随机数范围为0-32767 ，缩小至1-100
    printf("请猜1至100之间的一个数字：>");
	//猜数字
	while (1)
	{
		scanf("%d", &guess);

		if (guess > ret)
		{
			printf("猜大了，继续猜\n");
		}
		else if (guess < ret)
		{
			printf("猜小了，继续猜\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	//用时间戳来设置随机数生成起点，确保起始不同，生成数不同
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}