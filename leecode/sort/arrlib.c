#include <stdio.h>
#include <stdlib.h>

void printarr(int* arr, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
