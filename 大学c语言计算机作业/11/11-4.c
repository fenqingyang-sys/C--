#include <stdio.h>
#include <string.h>
#include <math.h>
    void reverse(int a[])
{
    int t;
    int i,length=strlen(a);
    for(i=0;i<length/2;i++)
    {
    t=a[i];
    a[i]=a[length-i-1];
    a[length-i-1]=t;
    }
}
int shijin(int n)
{
    int j,t,w=0,i=0;
    while(n){
        t=n%8;
        for(j=0;j<i;j++)
            t*=10;
        n/=8;
        i++;
        w+=t;
    }
    return w;
}

int main()
{
    int b;
    scanf("%d",&b);
    printf("%d",shijin(b));
}

