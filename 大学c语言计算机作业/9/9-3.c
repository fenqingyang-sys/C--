#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 300
int sushu(int a)
    {
        int b;
        for(b=2;b<a;b++)
        {
            if(a%b==0)
                break;

        }
        if(b==a)
            return 1;
        else
            return 0;
    }

int main()
{
    int x,sum=0,i,j,a[N]={0};
    for(i=2,j=0;i<300;i++)
    if(sushu(i))
        {
            a[j]=i;
            j++;
        }
    for(i=0;i<N;i++){
        if(fabs(a[i]-a[i+1])==2)
            {
                sum=sum+1;
                x=i;//�����ڶ����˫��̥����λ��
            }
    }
    printf("˫��̥���� %d\n",sum);
    printf("����һ������%d��%d",a[x],a[x+1]);



}
