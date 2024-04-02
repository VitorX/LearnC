#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc,char **argv)
{
	char carr[]="this is test string1";
	char *pc="this is test string2";

	printf("%p---->%s\n",carr,carr);
	printf("%p---->%s\n",pc,pc);
	printf("%p---->pc\n",&pc);
	//below code will lead crash 
	//pc[0]='T'; 
	//printf("new string:%s\n",pc);
	pause();
}
