#include <stdio.h>
#include <stdlib.h>

void printarr(int * p,int arrsize)
{
	for(int i=0;i<arrsize;i++)
		printf("%d ",p[i]);
	printf("\n");
}

void sortarr(int* nums, int numssize) 
{
	int tmp;	
	for(int i=0;i<numssize-1;i++)
		for(int j=i;j<numssize;j++)
		{
			if(nums[i]>nums[j])
			{
				tmp=nums[i];
				nums[i]=nums[j];
				nums[j]=tmp;
			}
		}

}

void moveZeroes(int* nums, int numssize) 
{
	int lastindex=numssize-1;
	int tmp=0;

	for(int i=0;i<=lastindex;i++)
	{
		if(nums[i]==0)
		{
			while(nums[lastindex]==0)
			{	
				lastindex--;
			}
			if(lastindex>i)
			{
				nums[i]=nums[lastindex];
				nums[lastindex]=0;
				lastindex--;
			}
		}
	}
printarr(nums,numssize);
printf("sort arr:%d\n",lastindex);
	sortarr(nums,lastindex+1);
}



int main(int argc, char** argv)
{
	int case1[]={0,1,0,3,12};	
	    printf("elements num of case 1:%d\n",sizeof(case1)/sizeof(int));
	printarr(case1,sizeof(case1)/sizeof(int));
	moveZeroes(case1,sizeof(case1)/sizeof(int));
	printarr(case1,sizeof(case1)/sizeof(int));
}
