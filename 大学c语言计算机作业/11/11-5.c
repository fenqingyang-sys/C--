#include<stdio.h> 
#include <stdlib.h>
int main()
{
	int x;
	int data[100];
	scanf("%d",&x);
	separate(data,x);
	huiwenshu(*data);
}

int separate(int *data,int n)
{
	int i=0;
	do
	{
		data[i]=n%10;
		n=n/10;
		i++;
	}  while(n>0);
	return i;
	
}
int huiwenshu(int num1)
{
	int num2=num1;
	int tem=0;
	while(num1)
	{
		tem=tem*10+(num1%10);
		num1=num1/10;
	}
	if(num2==tem)
	{
		printf("是回文数"); 
		 
	}
	else
	{
		printf("不是回文数"); 
	 } 
}

