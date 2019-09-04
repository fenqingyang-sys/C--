#include<stdio.h>
int fun (a)
{
    int n;
    if(a<0||a>20)
        printf("wrong");
    else
    if(a==0)
        n=1;
    else
    n=a*fun(a-1);
    return n;

}
main()
{
    int m,s;
    scanf("%d",&m);
    s=fun(m);
    printf("%d",s);

}
