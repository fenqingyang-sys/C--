#include <stdio.h>
int yueshu(int a,int b);
int main ()
{
    int a,b;
    scanf ("%d %d",&a,&b);
    printf("%d",yueshu(a,b));

}
int yueshu (int a, int b)
{
    int m=a,n=b,t;
    while (n>0)
    {
        t=m%n;
        m=n;
        n=t;
    }
     return m;
}
