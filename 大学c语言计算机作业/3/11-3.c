#include<stdio.h>
#define n 5
#define m 3
int main()
{
	int i,j;
	char a [n][m];
	printf("请输入初始化字符"); 
	gets(a);
	char b;
	scanf("%c",b);
	printf("请输入要查找字符");
	for(i=0;i<n;i++);
	{
		for(j=0;j<m;j++);
		{
			if(a[i][j]==b)
			{
				printf("%d",i);
			}
				else
			 {
				printf("None");
		     }
	
		}
		
	 
	 }
}
	
	
	 
