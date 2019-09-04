#include<stdio.h>
#include<stdlib.h>
int chaojisushu(int a)
{
    int b;
    for(b=2;b<a;b++)
    {
        if(a%b==0)
            break;
    }
    if(b==a)
        return 1;
    else
        return 0;
}
int main()
{
    int count=0,max,i,t;
    for(i=101;i<=9999;i+=1)
    {
        t=i;
        if(chaojisushu(t)&&chaojisushu(t/10)&&chaojisushu(t/100)&&chaojisushu(t/1000))
        {
            count++;
            max=t;
            printf("%d\t",i);
        }
        else
            if(t<=999&&chaojisushu(t)&&chaojisushu(t/10)&&chaojisushu(t/100))
        {
            count++;
            max=t;
            printf("%d\t",i);
        }
    }
    printf("count=%d,max=%d",count,max);
}
