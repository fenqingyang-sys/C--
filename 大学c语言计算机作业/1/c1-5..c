#include <stdio.h>
int main()
{
    int a,y,w,d;
    scanf("%d",&a);
    y=a/365;
    a=a%365;
    w=a/7;
    a=a%7;
    d=a;
    printf("%d,%d,%d",y,w,d);

}
