#include <stdio.h>
#include <stdlib.h>

void func2(long a, int b, int c, int d, int e, int f)
{
	++a;
	++b;
	++c;
	++d;
	++e;
	++f;
}
int main(int argc,char **argv)
{
	func2(1,2,3,4,5,6);
}
