#include<stdio.h>
main()
{	
    int m;
    printf("请输入打印行数"); 
    scanf("%d",&m);    
    int a[m][m],i,j,k;
	for(i=0;i<m;i++)
		{
		   for(j=0;j<m;j++)
			{
			if(j==0)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			if(i==j)
			{
			a[i][j]=1;
			break;
			}
				}	
		}
	for(i=0;i<m;i++)
		{for(k=m-1-i;k>=0;k--)
			printf(" ");
			for(j=0;j<=i;j++)
				printf("%d ",a[i][j]);
				printf("\n");
				
			}	
			
			
			
}
