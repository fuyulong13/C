#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main(void)
{
	char arr1[] = "Welcome to  C Programming Language !";
	char arr2[] = "####################################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//字符形式以字符 \0 结尾
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}

	system("pause");
	return 0;
}