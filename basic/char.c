#include <stdio.h>
#include <stdlib.h>

static int si=10; 
int gi;
int main(int argc,char **argv)
{
	char c1='\r',c2='\n',c3='a',c4='b',c5='A';
	si=11;
	gi=12;
	printf("%d,%d,%d,%d,%d\n",c1,c2,c3,c4,c5);
	printf("%p\n",&c1);
	printf("%p\n",&c2);
	printf("%p\n",&c3);

	scanf("%c",&c1);
}
