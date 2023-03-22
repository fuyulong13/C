#include<stdio.h>
int main()
{
	int i,j,k,s,n=0;
	for(i=1;i<5;i++){
		for(j=1;j<5;j++){
			for(k=1;k<5;k++)
			{
				if(i!=k&&i!=j&&j!=k){
				n++;
				//s=i*100+j*10+k;
				printf("%d%d%d\n",i,j,k);
				}
			}
		}
	}
	printf("共有%d个三位数\n",n);
	return 0;
}