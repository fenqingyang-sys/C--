#include<stdio.h>
main()
{
    int i,n,ns,flag,count,r,rs;
    static int a[50];
    count=0;
    for(i=1;i<700;i++)
    {
        n=i;
        ns=i*i,flag=1;
        while(n>0&&flag)
        {
            r=n%10;n=n/10;
            rs=ns%10;ns=ns/10;
            if(rs!=r)
              flag=0;}
              if(flag)
              {
                  a[count]=i;count++;
                  printf("%5d",i);
              }}
              printf("\ncount=%d,max=%d\n",count,a[count-1]);}


