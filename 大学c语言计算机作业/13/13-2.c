#include<stdio.h>
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int i,j;
	i=&a;
	j=&b;
	swap(i,j);
	printf("%d %d",a,b);
	
 }
 
 int swap(int *m,int*n) 
 {
 	int k;
 	k=*m;
 	*m=*n;
 	*n=k;
 }
