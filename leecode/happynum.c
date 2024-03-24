#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sumBitSquar(int n){
    int sum=0, lownum=0;
    do{
        lownum=n%10;
        sum+=lownum*lownum;
        n=n/10;
    }      
    while(n!=0);
    return sum;
}

bool isHappy(int n) {
    int slow=n, fast =n;

    do{
        slow=sumBitSquar(slow);
        fast=sumBitSquar(fast);
        fast=sumBitSquar(fast);
    }while(slow!=fast);

    return slow==1;
}

int main(int argc, char** argv)
{
    int i1=19,i2=200,i3=999;
    printf("%d is happy num:%s\n",i1,isHappy(i1)?"True":"False");
    printf("%d is happy num:%s\n",i2,isHappy(i2)?"True":"False");
    printf("%d is happy num:%s\n",i3,isHappy(i3)?"True":"False");
}

