#include <stdio.h>
#include <string.h>
void sort(char * str[],int paixu)
{
	int i,j;
	char * temp;
	for(i=0;i<paixu-1;i++)
	{
		for(j=i+1;j<paixu;j++)
		{
			if(strcmp(str[i],str[j])>0){temp=str[i];str[i]=str[j];str[j]=temp;}
	}
		}
			}
int main()
{
    char a[5][10]={"China","America","Japan","France","England"};
	char *p[5];
	int i;
	for(i=0;i<5;i++)
        {
            p[i]=a[i];
        }
	sort(p,5);
	for(i=0;i<5;i++)
	printf("%s ",p[i]);
	printf("\n");
}
