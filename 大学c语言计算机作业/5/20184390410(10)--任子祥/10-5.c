#include<stdio.h>
#include<string.h>
void function(char a[],int m)
{
int i,j;
    char t;
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               t=a[j+1];
               a[j+1]=a[j];
               a[j]=t;
            }
        }
    }
}

main()
{
	char t[]="fbla";
	int lon1,lon2;
	char a[20];
	gets(a);
	lon1=strlen(a);
    function(a,lon1);
    strcat(a,t);
    lon2=strlen(a);
    function(a,lon2);
    puts(a);
    
	
}
