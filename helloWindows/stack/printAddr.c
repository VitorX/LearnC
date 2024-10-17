#include <stdio.h>
#include <stdlib.h>

int testFun(int a)
{
	return ++a;
}

void main(int argc, char **argv)
{
	char c='a';
	int a=1;
	int b=2;

	char *c2=malloc(sizeof(c2));
	*c2='b';
	int *i1=malloc(sizeof(i1));
	int *i2=malloc(sizeof(i2));
	*i2=3;

	printf("%p------>%c\r\n",&c,c);
	printf("%p------>%d\r\n",&a,a);
	printf("%p------>%d\r\n",&b,b);

	printf("%p------>%c\r\n",c2,*c2);
	printf("%p------>%d\r\n",i1,*i1);
	printf("%p------>%d\r\n",i2,*i2);

	printf("%p------>address of testFun\r\n",&testFun);
}
