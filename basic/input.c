#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char answer[10], *p;
	printf("Type something:\n");
	fgets(answer, sizeof answer, stdin);
	for(int i=0;i<10;i++)
		printf("%d:%d,",i,answer[i]);
	if((p = strchr(answer, '\n')) != NULL)
		*p = '\0';
	printf("You typed \"%s\"\n", answer);
}
