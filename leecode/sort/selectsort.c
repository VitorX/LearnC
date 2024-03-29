#include <stdio.h>
#include <stdlib.h>

void selectsort(int* arr, int size)
{
    int minindex,min;
    for(int i=0;i<size-1;i++)
    {
        minindex = i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minindex])
                minindex =j;
        }
        if(minindex!=i)
        {
            min=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=min;
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
    selectsort(test1,sizeof(test1)/sizeof(test1[0]));
    printarr(test1,sizeof(test1)/sizeof(test1[0]));

}
