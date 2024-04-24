#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include <stdbool.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head == NULL)
        return true;
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    //fast will be the last node
    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;        
    }

    struct ListNode *tmp;
    struct ListNode *mid;
    mid=slow;
    //双数前进一格
    if(slow->next)
        slow=slow->next;
    
    while(slow)
    {
        tmp = slow->next;
        if(tmp)
            tmp->next=slow;
        
        slow=tmp;
    }
    if(mid->next)
        mid->next->next=NULL;
    mid->next=NULL;
    tmp=head;
    while(fast && tmp )
    {
        if(fast->val!=tmp->val)
            return false;
        fast=fast->next;
        tmp=tmp->next;
    }
    return true;

}
int main(int argc,char **argv)
{
	int arr[4]={1,2,2,1};
 	struct ListNode *plist; 
    createlist(&arr[0],4,plist);	
	printlist(plist);
	printf("the link list is palindrom:%s\n",isPalindrome(plist)?"true":"false");
}
