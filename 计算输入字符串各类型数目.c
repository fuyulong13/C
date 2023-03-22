#include<stdio.h>
int main()
{
	char a[100];
	int b=0,c=0,d=0,e=0,i=0;
	printf("请输入一串字符:");
	gets(a);
	while(a[i]!='\0')
	{
		
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))//计算字母//
			b++;
		else
			if(a[i]==32)//计算空格//
				c++;
			else
				if(a[i]>='0'&&a[i]<='9')//计算数字//
					d++;
				else
					e++;//其他字符//
				i++;
				}
	printf("字母有%d个\n空格有%d个\n数字有%d个\n其他字符有%d个\n",b,c,d,e);
	return 0;
}