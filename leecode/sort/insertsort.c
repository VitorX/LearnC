#include <stdio.h>
#include <stdlib.h>
#include "arrlib.h"
#include "arrsamp.h"

extern int arr2[];

static void insertsort(int* arr,int size)
{
	int current,index;
	for(int i=1;i<size;i++)
	{
		current=arr[i];
		for(index=i-1;index>=0;index--)
		{
			if(current<=arr[index])
				arr[index+1]=arr[index];
			else
				break;
		}
		if(index>0)
			arr[index]=current;
		else
			arr[0]=current;
	}
}

int main(int argc,char** argv)
{
	printarr(arr2,sizeof(arr2)/sizeof(int));
	insertsort(arr2,9);
	printarr(arr2,sizeof(arr2)/sizeof(int));
	
}
