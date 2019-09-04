#include<stdio.h>
#include<string.h>
int function(char c[],int l)
{
	int i,count=0;
	for(i=l-1;i>=0;i--)
	{
		printf("%c",c[i]);
		count ++;
	}
}


int main()
{
	char c[100]="";
	gets(c);
	function(c,strlen(c));//strlen记录输入字符串个数
	printf("\n") ;
	return 0;
}
