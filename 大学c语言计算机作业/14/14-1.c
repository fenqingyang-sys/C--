#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int a[10]={0};
	int i,j;
	FILE *fp;
	fp=fopen("14-1.txt","r");
	if(fp==NULL)
	{
		printf("打开失败");
		getch();exit(-1); 
	 } 
	 for(i=0;i<10;i++)
	 {
	 	fscanf(fp,"%d",&a[i]);
	 }
	 for(i=0;i<10;i++)
	 {
	 	for(j=0;j<10-i-1;j++)
	 	{
	 		if(a[j]<a[j+1])
	 		{
	 			int t;
	 			t=a[j];
	 			a[j]=a[j+1];
	 			a[j+1]=t;
			 }
		 }
	 }
	 
	 FILE *fpWrite=fopen("14-1paxu.txt","w"); 
	 if(fpWrite==NULL)  
	    {  
	       printf("打开失败");
		   getch();
		   exit(-1);
	    }
	    for(i=0;i<10;i++)
	    {
	      fprintf (fpWrite," %d ",a[i]);
		}
	 fclose(fpWrite);
	 printf("写入成功"); 
 		
	 	
 }  
