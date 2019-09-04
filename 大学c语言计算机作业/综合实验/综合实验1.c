#include<stdio.h> 
#include<string.h> 
#define N 5 
#define M 10 
/**********found**********/ 
void fun(char(*ss)[M],int k)
{
	int i = 0;
	while (i<N)
	{
		ss[i][k] = '\0';
		i++;
 
	}
 
}

main()
{
	char x[N][M]={"Create","Modify","Sort","skip","Delete"};
	int i;
	printf("\nThe Original string\n\n");
	for(i=0;i<N;i++)
	puts(x[i]);
	printf("\n");
	fun(x,4);
	printf("\nThe string after deleted:\n\n");
	for(i=0;i<N;i++)
	puts(x[i]);
	printf("\n");
}


