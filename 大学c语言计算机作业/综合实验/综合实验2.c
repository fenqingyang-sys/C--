#include<math.h> 
#include<stdio.h> 
double fun(double eps) 
	{  double s,t; int n=1;    
	s=0.0; /************found************/    
	t=1.0; 
	while(t>eps)    
	{  s+=t;       
	t=t * n/(2*n+1);       
	n++; 
	  }
	  s=s*2;
/************found************/   
 return(s); } 
 main() 
 {  double x;    
 printf("\nPlease enter a precision: "); 
 scanf("%lf",&x);    
 printf("\neps=%lf, Pi=%lf\n\n",x,fun(x)); 
 } 
	 
