#include <stdio.h>
#include <stdlib.h>

//date size: 12
struct data_st
{
    int i;
    float f;
    char c;
};

int main()
{
    struct data_st myst;
	myst.i=10;
	myst.f=20.0f;
	myst.c='A';
    printf("sizeof(data_st): %ld\n",sizeof(myst));
	printf("%p----->i=%d,f=%f,c=%c\n",&myst,myst.i,myst.f,myst.c);
struct data_st *p;
p=malloc(sizeof(*p));
*p=myst;
	printf("%p----->i=%d,f=%f,c=%c\n",p,myst.i,myst.f,myst.c);

}
