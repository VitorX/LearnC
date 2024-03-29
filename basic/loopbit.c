#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    unsigned int no=1;
    for(int i=0;i<32;i++)
    {
        printf("[%02d]%032b\n",i,no);
        no=no<<1;
    }
}
