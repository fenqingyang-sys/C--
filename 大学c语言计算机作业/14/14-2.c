#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
int main()
{
	FILE *fp1=NULL;
	FILE *fp2=NULL;
	char ch;
	fp1=fopen("14-2ԭʼ.txt","r") ;
	if(fp1==NULL)
	{
		printf("��ʧ��");
		getch();
		exit(-1); 
	 } 
	fp2=fopen("14-2����.txt","w");
	if(fp2==NULL)
	{
		printf("��ʧ��");
		getch();
		exit(-1); 
	 } 
	while((ch = fgetc(fp1))!=EOF)
	{
		fputc(ch,fp2);
		
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
    
	 
}
