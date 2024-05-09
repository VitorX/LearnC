#include <stdio.h>
#include <stdlib.h>

int fun1(int a,int b)
{
	return a/b;
}

int main(int argc, int argv)
{
	int i=10,j=0;
	char c;
	c=getchar();
	printf("%d\n",fun1(i,j));

}
