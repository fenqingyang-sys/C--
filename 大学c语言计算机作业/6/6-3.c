#include<stdio.h>
#include<math.h>
int main ()
{
    int gou,gu,xian,count=0,i;
    for(xian=1;xian<=1000;xian++)
    {
        i=0;
        for(gou=1;gou<xian;gou++)
        {
            for(gu=1;gu<xian;gu++)
                {
                    if(xian*xian==gou*gou+gu*gu)
                        {
                            printf("%d\t",xian);
                            count++;
                            i=1;
                            break;
                        }
                    if(i==1)
                    break;
                }


        }
    }
    printf("%d",count);
}
