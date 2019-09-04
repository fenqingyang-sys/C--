#include<stdio.h>
int main()
{
    int n=1000,count=0;
    for (n=1000;n<=9999;n++)
    {
        if(n%4==0&&n%10==6)
        {
             printf ("%8d\n",n);
             count ++;
             if(count%5==0)
                printf ("\n");

        }

    }
     printf("有%d个这样的数\n",count);


    }


