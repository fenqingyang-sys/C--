#include<stdio.h>
void fun(char *a, int n) 
{ 
   int i=0,count=0;
   int tem=1;
   char *p=a;
   while(tem)
   {
   	if(*p=='*')
   	{
   		count++;
	   }
	   else
	   tem=0;
	   p++;
   }
  for(i=n;count<81;i++,count++)
   {
	   a[i]=a[count];
   }


    
} 
main() 
{  
char s[81]; 
int n;
void NONO ();    
printf("Enter a string:\n");gets(s);    
printf("Enter n : ");scanf("%d",&n);    
fun(s,n);    
printf("The string after deleted:\n");puts(s);    
NONO(); 
} 
void NONO () 
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */   
FILE *in, *out ;   int i, n ; char s[81] ;   
in = fopen("in.dat","r");   
out = fopen("out.dat","w");   
for(i = 0 ; i < 10 ; i++) 
{     fscanf(in, "%s", s);     
fscanf(in, "%d", &n);     
fun(s,n);     
fprintf(out, "%s\n", s);       
}   
fclose(in);   
fclose(out); 
} 
 
