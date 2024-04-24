#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc,char** argv)
{
	int *p=malloc(sizeof(int));
	*p=10;
	int *q=p;
	printf("allocate int at the address %p, and the value is %d.\n",p,*p);
	free(p);
	if(p==NULL)
		printf("the point p is freed sucessfully!\n");
	else
		printf("the address of p is:%p after call free(), and the value is %d.\n",p,*p);

	printf("%p--->%d\n",q,*q);
}
