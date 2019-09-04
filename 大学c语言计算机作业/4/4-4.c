#include <stdio.h >
 int main()
{
    int n=1,count=0;
    for (n=1;n<=1000;n++)
    {
        if(n%3==0&&n%5!=0)
        {
             printf ("%8d\n",n);
             count ++;
             if(count%5==0)
                printf ("\n");

        }

    }
     printf("有%d个这样的数\n",count);


    }


