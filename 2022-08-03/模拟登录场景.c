#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//只允许三次输入密码
int main(void)
{
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "12345678") == 0)//== 不能用来比较两个字符串是否相等
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误！\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均输错，退出程序，请十分钟后再次尝试！\n");
	}

	system("pause");
	return 0;
}