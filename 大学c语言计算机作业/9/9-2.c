#include<stdio.h> 
int main()
{
	int a[20]={0,1};int i;//��ʼ������ 
	for(i=2;i<20;i++)
		{
			if(i%2==0)
			{
				a[i]=a[i-1]+a[i-2];	
			 }
			 else
			 {
			 	a[i]=a[i-1]-a[i-2];
			  }
			  if(a[i]<0)
			  {
			  	a[i]=a[i]*-1;
			   } 
			   else
			   {
			   	a[i]=a[i]*1;
			   }
			 
		}//�������ÿһ�� 
				for(i=0;i<20;i++)
	  {
		  if(i%4==0)   //ÿ�ĸ����� 
			  printf("\n");
		  printf("% d",a[i]);
	  }
	  printf("\n");

		}
