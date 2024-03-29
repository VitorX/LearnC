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
    printf("sizeof(data_st): %ld\n",sizeof(myst));
}
