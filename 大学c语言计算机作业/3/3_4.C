#include <stdio.h>
int main(int argc, char *argv[])
{
	char a;
	printf("����һ���ַ�");
	scanf("%c",&a);
	if(a>=54 && a<=90)
		printf("%c\n",a+32);
	else if(a>=97 && a<=122)
		printf("%c\n",a-32);
	else
		printf("%c\n",a);
	return 0;
}
