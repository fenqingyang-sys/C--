#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	int *p;
	p=a; 
	for(i=0;i<10;i++)	
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(p[i]>p[j])
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
