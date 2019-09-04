#include<stdio.h>
double fun(double x,int n)
{
  int i,t=1,m=1;
  double s=1.0,w=1.0;
  for(i=1;i<=2*n;i++)
  {
	  w=w*x;
	  t=t*i;
	  if(i%2==0)
	  { m=-m;s=s+m*w/t;}
  }
  return s;
}
main()
{
	double x=5.6;
	int n=7;
	double p,q,t,s;
	p=fun(x,n);
	q=fun(x+2.3,n);
	t=fun(x-3.2,n+3);
    s=p/(q+t);
	printf("%lf\n",s);
}
