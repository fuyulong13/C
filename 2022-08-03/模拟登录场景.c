#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//ֻ����������������
int main(void)
{
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "12345678") == 0)//== ���������Ƚ������ַ����Ƿ����
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�������������˳�������ʮ���Ӻ��ٴγ��ԣ�\n");
	}

	system("pause");
	return 0;
}