#include<stdio.h>
#include<string.h>
int main ()
{
	int a[10]={2,4,6,8,10,12,14,16,18,20} ;
	int b[10]={1,3,5,7,9,11,13,15,17,19};
	int c[20];
	int i,j=0,k=0;
	for(i=0;i<20;i++)
	{   
	   if((i+1)%2==1)
	    {
	    	c[i]=b[j++];
		}
		else
		{
			c[i]=a[k++];
		}
					
	   }
	   for(i=0;i<20;i++)
	   {
	   	printf(" %d",c[i]);
	
	   }
	
 } 
