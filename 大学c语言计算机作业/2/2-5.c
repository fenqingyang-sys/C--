#include<stdio.h>
#include"math.h"
 main()
{
    float  a,b,c,p;
    float s;
    printf(" ‰»Î");
    scanf("%f%f%f",&a,&b,&c);
    p=(a+b+c)/2;
    s=p*(p-a)*(p-b)*(p-c);
    s=sqrt(s);
    printf("s=%f",s);

}
