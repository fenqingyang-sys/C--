#include <stdio.h>
float qiuzhi (float k);
int main()
{     int k;
     scanf("%d",&k);
        printf("%f",qiuzhi(k));

}

float qiuzhi (float k)
{
    int n;
    float s,w,p,q;
    n=1;
    s=1.0;
    while(n<=k)
    {
        w=2.0*n;
        p=w-1.0;
        q=w+1.0;
        s=s*w*w/p/q;
        n++;
    }
    return s;
}
