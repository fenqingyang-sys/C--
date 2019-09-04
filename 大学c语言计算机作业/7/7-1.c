#include<stdio.h>
int sushu(int a);
int count=0;
main()
{
    int a;
    for(a=1000;a<10000;a++)
    {
        sushu(a);
    };
    printf ("\ncount=%d",count);
}

int sushu(int a )
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
            break;
    }
    if(i==a)
        {
            printf("%d\t",a);
            count ++;
            if(count%6==0)
                printf("\n");
        }
}

