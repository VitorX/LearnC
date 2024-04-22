#include <stdio.h>
#include <stdlib.h>

static int i;

int myAdd(int a,int b)
{
	return a+b;
} 

int mySub(int a,int b)
{
	return a-b;
}

static int getI()
{
	return i++;
}
