#include<stdio.h>
int main ()
{
	int a[3][4];
	int (*k)[4];
	int i,j;
	k=a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",*(k+i)+j);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",*(*(k+i)+j));
		
		}
		printf("\n");
	}
	
	
 } 
