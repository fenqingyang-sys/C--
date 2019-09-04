#include<stdio.h>
main()
{
    int a,b,count=0;
     for(a=2;a<=10000;a++)
    {
        for(b=2;b<=a;b++)
        {
            if(a%b==0)break;
        }
        if(a==b)
        {
            printf("%d\t",a);
            count++;
        }
    }
    printf("    count=%8d\n",count);

}
