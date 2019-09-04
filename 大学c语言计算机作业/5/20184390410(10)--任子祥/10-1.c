#include<stdio.h>
main()
{
	int i,j,a[3][3],sum1,sum2;
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   scanf("%d",&a[i][j]);
	   
	   }
	   sum1=a[0][0]+a[1][1]+a[2][2];
	     sum2=a[0][2]+a[1][1]+a[2][0];
	        printf("sum1=%d\n",sum1);
	           printf("sum2=%d\n",sum2);
}

	
	   
	    

