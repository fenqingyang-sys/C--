#include<stdio.h>
 main()
{
	char a[100];
	char *p;
	p=a;
	gets(a);
	int space=0,num=0,da=0,xiao=0,k=0;
	while(*p!='\0')
	{
		if(*p>='A'&& *p<='Z')
		{
			da++;
		}
		else if(*p>='a'&& *p<='z')
		{
			xiao++;
		}
		else if(*p==' ')
		{
			space++;
		}
		else if(*p>'0'&&*p<'9')
		{
			num++;
		}
		else
		{
			k++;
		}
		p++;

	}
	printf("�ո�Ϊ%d,����Ϊ%d����д��ĸΪ%d,Сд��ĸΪ%d,����Ϊ%d",space,num,da,xiao,k);


}

