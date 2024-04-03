#include <stdio.h>
#include <stdlib.h>
#include "common.h"

//extern struct ListNode list1[5];
struct ListNode* reverseList(struct ListNode* head) {
    if(!head)
        return NULL;
    struct ListNode *curr=head;
    struct ListNode *next=curr->next;
    struct ListNode *tmp;
    while(1)
    {   
        if(next)
        {
            tmp=next->next;
            next->next=curr;
            curr=next;
            next=tmp;            
        }else
            break;                    
    }
    head->next=NULL;
    return curr;
}

int main(int argc, char **argv)
{
    initlist();
    printlist(&list1[0]);
    struct ListNode *p=reverseList(&list1[0]);
    printlist(p);
}
