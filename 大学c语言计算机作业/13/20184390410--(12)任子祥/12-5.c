#include "stdio.h"
void fun(char *s,char *t,char str[]) /*串s和t按ascii码顺序连接存入str中*/
{
 int k=0;
 while(*s&&*t)
 {
	 if(*s<*t) 	str[k++]=*s++;	 
	 else  str[k++]=*t++;
 }
 while(*s) str[k++]=*s++;	/*把串s剩余字符存入str中*/
 while(*t) str[k++]=*t++;	/*把串t剩余字符存入str中*/
 str[k]='\0';
}

void main()
{
	char s[20],t[20],str[40];
	printf("请输入字符串s和t\n");
	scanf("%s%s",s,t);
	fun(s,t,str);
	printf("%s\n",str);
}

