#include <stdio.h>

int myAdd(int a,int b,int c,int d)
{
    return a+b+c+d;
}
void main(int argc,char** argv)
{
    printf("%d\n",myAdd(1,2,3,4));
}