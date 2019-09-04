#include<stdio.h>

/************found************/

int fun (int s)

{   int t, sl=10;

    t = s % 10;

    while (s > 0)

    {   s = s/100;

        t = s%10 * sl + t;

/************found************/
        sl*=10;

    }

      return t;


/************found************/

                   ;

}

main()

{  int s, t;

   printf("\nPlease enter s:");

 scanf("%d", &s);

   t=fun(s);

   printf("The result is: %d\n", t);

}


