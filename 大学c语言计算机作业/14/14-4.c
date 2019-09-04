#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int a[10]={0};
	int i;
	int sum=0;
	float mean;
	FILE *fp;
	fp=fopen("14-4³É¼¨.txt","r");
	if(fp==NULL)
	{
		printf("´ò¿ªÊ§°Ü");
		getch();exit(-1); 
	 } 
	 for(i=0;i<10;i++)
	 {
	 	fscanf(fp,"%d",&a[i]);
	 }
	 
	 for(i=0;i<10;i++)
	 {
	 	sum=sum+a[i];
	  }
	  mean=sum/10;
	  printf("%f",mean);
	  fclose(fp);
 		
	 	
 }  
