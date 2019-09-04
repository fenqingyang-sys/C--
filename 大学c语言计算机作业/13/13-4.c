
#include <stdio.h>
void sort(int x[],int n);
int main()
{
    
    int i,a[10];
    int *p=a;
    printf("输入待排序数\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(p,10);
    printf("排序之后\n");
    for(p=a;p<a+10;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}
void sort(int x[],int n)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)

            if(x[j]<x[k]) 
			 k=j;
            if(k!=i)
            {
                t=x[i];
                x[i]=x[k];
                x[k]=t;
            }

    }
}
