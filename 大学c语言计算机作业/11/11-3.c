#include<stdio.h>
#include<string.h>
int main()
{
	char a[][10]={"english","tomato","apple","happy"};
	char b[10];
	gets(b);
	int i,t,m=0;
	t=sizeof(a)/sizeof(a[0]);//ȷ������ 
	for(i=0;i<t;i++) 
	{
		if(strcmp(b,a[i])==0) 
		{
			m=1;
			goto A;
		}
		 
	}
	A:if(m)
	{
		printf("λ��Ϊ%d",i);
	}
	else
	{
		printf("None");
	 } 
	 
 } 
