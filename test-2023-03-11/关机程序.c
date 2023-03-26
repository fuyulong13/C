#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
		//system()-执行系统命令的
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
	scanf("%s", input);

	if (strcmp(input, "我是猪") == 0)//比较两个字符串—dtrcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}