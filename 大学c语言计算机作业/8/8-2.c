#include<stdio.h>

#include<math.h>

double funx(double x)

{    float y;
     y=2*x*x*x-4*x*x+3*x-6;

/************found************/

return (y);

}

double fun(double m, double n)

{

/************found************/

    double  r;

    r=(m+n)/2;

/************found************/

    while(fabs(n-m)>0.001)

    {    if(funx(r)*funx(n)<0)

 m=r;

    else

n=r;

         r=(m+n)/2;

    }

    return r;

}

main()

{  double m,n, root;

   printf("Enter m n : \n");

 scanf("%lf%lf",&m,&n);

   root=fun(m,n);

   printf("root = %6.3f\n",root);

}


