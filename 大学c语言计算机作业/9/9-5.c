#include<stdio.h>
main()
{
    int a[1001],i,s=0,n=1;
    for(i=1;i<=1000;i++)
        a[i]=i;
    a[1]=0;
    for(i=1;i<=1000;i++)
    {
        if(a[i]!=0)
        {
            s+=1;
            if(s==50)
            {
                n++;
                if(n==1000)
                {
                    printf("\na[%d]=%d",i,a[i]);
                    break;
                }
                a[i]=0;s=0;
            }
    }
    if(i==1000)
        i=0;
    }
}
