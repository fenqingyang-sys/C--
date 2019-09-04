#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	FILE *fp;
	char ch;
	fp=fopen("14-3.txt","a+");
	if(fp==NULL)
	{
		printf("error on open");
		getch();
		exit(-1); 
	 } 
      while ((ch = getchar( ))!='#')
      {
      	fputc (ch,fp);
	  }
		 	
	 fclose(fp);
}
