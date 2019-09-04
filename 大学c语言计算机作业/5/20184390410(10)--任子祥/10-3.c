#include<stdio.h>
int main ()
{ 
	 int a[3][3];int b[3][4];int c[3][4]={0};
	 int i,j,k;
	 printf("请输入3*3数组"); 
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		scanf("%d",&a[i][j]);
		 }
	}
		 printf("请输入3*4数组") ;
		 for(i=0;i<3;i++)
		 {
		 	for(k=0;k<4;k++)
		 	{
		 	    scanf("%d",&b[i][k]);
		 	}
		 }
		 
	 
	      for(i=0;i<3;i++)
	      {
	      	for(j=0;j<4;j++)
	      	{   
	      	    for(k=0;k<3;k++)
	      		c[i][j]+=a[i][k]*b[k][j];
			  }
		  }
		     for(i=0;i<3;i++)
		     {
		     	for(j=0;j<4;j++)
		     	{
		     		printf("%d",c[i][j]);
		     		printf(" ");
					 if((j+1)%4==0)//j=0所以（j+1）%4 
					 {
					 	printf("\n");
					 }
				 }
			 }
	  return 0;     
}
