#include<stdio.h>
int main()
{
	char a[100];
	int b=0,c=0,d=0,e=0,i=0;
	printf("������һ���ַ�:");
	gets(a);
	while(a[i]!='\0')
	{
		
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))//������ĸ//
			b++;
		else
			if(a[i]==32)//����ո�//
				c++;
			else
				if(a[i]>='0'&&a[i]<='9')//��������//
					d++;
				else
					e++;//�����ַ�//
				i++;
				}
	printf("��ĸ��%d��\n�ո���%d��\n������%d��\n�����ַ���%d��\n",b,c,d,e);
	return 0;
}