#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *s3 = strcat(s1, s2);


	printf("%s\n",s1);
	printf("%s\n",s2);
	printf("%s\n",s3);
}
