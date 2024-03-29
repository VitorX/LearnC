#include <stdio.h>
#include <stdlib.h>

void bubblesort(int* arr, int size)
{
    int tmp;
    for(int j=0;j<size-1;j++)
    {
        for(int i=j;i<size-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                tmp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
            }
        }
    }
}

void printarr(int* arr, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(int argc, char** argv)
{
    int test1[]={5,3,64,23,436,12,55};
    printarr(test1,sizeof(test1)/sizeof(test1[0]));
    bubblesort(test1,sizeof(test1)/sizeof(test1[0]));
    printarr(test1,sizeof(test1)/sizeof(test1[0]));

}
