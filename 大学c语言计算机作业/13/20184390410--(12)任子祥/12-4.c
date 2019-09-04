#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	swap(&m,&n);
	printf("%d %d",m,n);
}

int swap(int *m,int *n)
{
	int t;
	t=*m;
	*m=*n;
	*n=t;
}
