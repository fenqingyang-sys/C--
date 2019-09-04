#include <stdio.h >
main()
{
    int m,n,t;
    printf("输入两个整数");
    scanf("%d%d",&n,&m);
    while (n>0)
    {
        t=m%n;
        m=n;
        n=t;
    }
     printf("%d\n",m);
}
