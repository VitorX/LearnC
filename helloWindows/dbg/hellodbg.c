#include<stdio.h>
#include<windows.h>
#include"DbgHelp.h"

int main()
{
	printf("%d",sizeof(MINIDUMP_THREAD));
	return 0;
}
