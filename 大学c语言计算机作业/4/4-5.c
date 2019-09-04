#include <stdio.h >
int main ()
{
    int n=1,count=0;
    while (n<2018)
    {
         if(n%4==0&&n%100!=0||n%400==0)
         {
             printf ("%16d",n);
             count++;
             if(count%5==0)
                printf ("\n");
         }
         n++;
    }

    printf ("\ncount=%d\n",count );

}
