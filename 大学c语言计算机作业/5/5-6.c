#include <stdio.h>
int main()
{ float n,sum=0,m,t=1;
     for (n=1;(1.0/(2*n-1))>(1e-6);n++)
    {
         m=t*(1.0/(2*n-1));
         t=t*-1;
        sum=sum+m;
    }
    printf("%f",sum);
}
