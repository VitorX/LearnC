#include <stdio.h>
#include <stdlib.h>
#include "common.h"

struct ListNode list1[5];
void printlist(struct ListNode* head)
{
    while(head)
    {
        printf("%d\t",head->val);
        head=head->next;    
    }
    printf("\n");
}
void printarr(int* arr, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void initlist()
{
    int i;
    for(i=0;i<sizeof(list1)/sizeof(list1[0]);i++)
    {
        list1[i].val=i;        
        list1[i].next=&list1[i+1];
    }
    list1[i-1<0?0:i-1].next=NULL;
}

int createlist(int *arr, int size,struct ListNode *head)
{

   if((head=malloc(sizeof(struct ListNode)*size))==NULL)
           return 0;
    int i;
    for(i=0;i<size;i++)
    {
        (head+i)->val=i;
        if(i<size-1)
        (head+i)->next=head+i+1;
        else
        (head+i)->next=NULL;

    }
    (head+i)->next=NULL;
  return 1; 
}
