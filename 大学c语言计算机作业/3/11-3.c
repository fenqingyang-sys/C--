#include<stdio.h>
#define n 5
#define m 3
int main()
{
	int i,j;
	char a [n][m];
	printf("�������ʼ���ַ�"); 
	gets(a);
	char b;
	scanf("%c",b);
	printf("������Ҫ�����ַ�");
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
	
	
	 
