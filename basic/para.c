#include <stdio.h>
#include <stdlib.h>

static void fun1(int *pi)
{
	printf("enter fun1()\n");
	int k=10;
	printf("%p--->%p,%p--->%d\n",&pi,pi,pi,*pi);
	pi=&k;
	printf("%p--->%p,%p--->%d\n",&pi,pi,pi,*pi);
	printf("leave fun1()\n");
}

int main(int argc,char **argv)
{
	printf("enter main\n");
	int i=1;
	int *pi=&i;
	printf("%p--->%p,%p--->%d\n",&pi,pi,pi,*pi);
	fun1(pi);	
	printf("%p--->%p,%p--->%d\n",&pi,pi,pi,*pi);
	printf("leave main\n");
}
