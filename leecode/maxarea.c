#include <stdio.h>
#include <stdlib.h>

#define max(a,b)  \ 
({int A=a,B=b; (((A)>(B))?(A):(B));})


int maxArea(int* height, int heightSize)
{
    int res=0;
    for(int i=0,j=heightSize-1;i<j;)
    {
        if(height[i]<height[j])
            res=max(res,height[i++]*(j-i));
        else
            res=max(res,height[j--]*(j-i));
    }
    return res;
}

int main(int argc, char** argv)
{
    int height[9]={1,8,6,2,5,4,8,3,7};
    printf("%d",maxArea(height,9));
    exit(0);
}
