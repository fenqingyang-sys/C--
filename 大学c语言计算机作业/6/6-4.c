
#include <stdio.h>
#include <stdlib.h>
void print_up(int i);
int main()
{
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
		print_up(i);
		printf("\n");
	}
	for(i=3;i>=0;i--)
	{
		print_up(i);
		printf("\n");
	}
}
void print_up(int i)
{
	int j=0;
	int start=9-2*i;
	//print the front
	for(j=0;j<i;j++)
		printf(" ");
	//print the medium
	for(j=0;j<start;j++)
	{
		//if the j is even
		if(j%2==0)
		{
			printf("*");
		}
		else  //the j is odd
		{
			printf(" ");
		}
	}
	//print back
	for(j=0;j<i;j++)
		printf(" ");
}
