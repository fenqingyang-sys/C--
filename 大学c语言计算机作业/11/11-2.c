#include <stdio.h>
#include<string.h>
int main ()
{
	int i,j,k,m,n;
	char a[100];
	printf("�������ʼ�ַ���");
	gets(a);
	char b;
	printf("������Ƚ��ַ�");
	scanf("%c",&b);
	k=strlen(a);
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}//�ַ����벢����

	for(i=0;i<k;i++)
	{
		if(a[i]==b)
		{
			printf("%d",i);
		}
        else
		{
			a[k]=b;
			for(i=0;i<k;i++)
			{
				for(j=0;j<k-i;j++)
				{
					if(a[j]>a[j+1])
					{
						n=a[j];
				        a[j]=a[j+1];
				        a[j+1]=n;
					}

				}
			}
            a[k+1]='\0';

			}
		}
		puts(a);
		return 0;
}

