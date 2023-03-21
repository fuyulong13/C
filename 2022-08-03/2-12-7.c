#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int sm(void)
{
	printf("Smile!");
	return 0;
}

int main()
{
	int x;
	int y;

	for (y = 3; y >0; y--)
	{
		x = y;
		for (x = y; x > 0; x--)
		{
			sm();
		}
		/*while (x)
		{
			sm();
			x--;
		}*/
		printf("\n");
	}

	getchar();
	return 0;
}