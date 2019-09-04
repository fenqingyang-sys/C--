#include<stdio.h>
#include<string.h>
int main ()
{
	int i,k;
	char a[100];
	gets(a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		a[i]=a[i]+32;
		else
		{
			a[i]=a[i]-32;
		}
	}

	puts(a);
	return 0;

}

