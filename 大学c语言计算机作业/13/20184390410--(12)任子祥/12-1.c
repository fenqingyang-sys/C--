#include<stdio.h>
int main()
{
	int a[10];
	int i,j;
	int *p;
	p=a;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=*p;
	//printf("%d",*p);
	for(i=0;i<10;i++)
	{
		if(p[i]<min)
		{
			min=p[i];
		}
		
	}
	printf("%d",min);
}



	
	

	
 
