#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char** argv)
{
	printf("short:%ld,short int:%ld,int:%ld,long int:%ld,long long int:%ld\n",sizeof(short),sizeof(short int),sizeof(int),sizeof(long int),sizeof(long long int));
	printf("char:%ld\n",sizeof(char));
	printf("'a':%ld\n",sizeof('a'));
	printf("int16:%ld,int32:%ld\n",sizeof(int16_t),sizeof(int32_t));
}
