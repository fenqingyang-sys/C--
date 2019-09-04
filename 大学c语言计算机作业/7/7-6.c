#include <stdio.h>
main( )
{
  int i,t;
  t=fun(8);
  for(i=1;i<8;i++)
	 t=t*2;
  printf("t=%d\n",t);
}
int fun(int m)
{
  int i,j,n=1,sum;
  for(i=1;i<=765;i++)
  {   sum=i;
      n=i;
	  for(j=1;j<m;j++)
	  {  n=n*2;
        sum=sum+n;
	  }
	  if(sum==765)  break;
   }
  return i;
}
