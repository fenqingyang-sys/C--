#include "stdio.h"
void fun(char *s,char *t,char str[]) /*��s��t��ascii��˳�����Ӵ���str��*/
{
 int k=0;
 while(*s&&*t)
 {
	 if(*s<*t) 	str[k++]=*s++;	 
	 else  str[k++]=*t++;
 }
 while(*s) str[k++]=*s++;	/*�Ѵ�sʣ���ַ�����str��*/
 while(*t) str[k++]=*t++;	/*�Ѵ�tʣ���ַ�����str��*/
 str[k]='\0';
}

void main()
{
	char s[20],t[20],str[40];
	printf("�������ַ���s��t\n");
	scanf("%s%s",s,t);
	fun(s,t,str);
	printf("%s\n",str);
}

