#include <stdio.h>
#include <stdlib.h>

int singleNumber(int* nums, int numsSize) {
    int ret=0;
    for(int i=0;i<numsSize;i++){
        ret^=nums[i];   
    }
     return ret;
}

int main(int argc, char** argv)
{
    int nums[]={2,2,1};
    int nums2[]={4,1,2,1,2};

    printf("%d\n",singleNumber(nums,3));
    printf("%d\n",singleNumber(nums2,5));
}
