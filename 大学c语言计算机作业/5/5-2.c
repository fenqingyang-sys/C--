#include <stdio.h>
int main()
{
    int x,y,z;
    for (x=0;x<=19;x++)
        for (y=0;y<=33;y++)
    {   z=100-x-y;
    if(5.0*x+3.0*y+z/3.0==100)
        printf("x=%d,y=%d,z=%d\n",x,y,z);


    }
}
