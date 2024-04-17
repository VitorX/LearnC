#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc,char** argv)
{
	int *p=malloc(sizeof(int));
	*p=10;
	printf("allocate int at the address %p\n",p);
	free(p);
	if(p==NULL)
		printf("the point p is freed sucessfully!\n");
	else
		printf("the address of p is:%p after call free()\n",p);
}
