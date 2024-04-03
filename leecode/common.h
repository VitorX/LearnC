#ifndef COMMON_H_
#define COMMON_H_
/**
 * Definition for singly-linked list.
 */
  struct ListNode {
      int val;
      struct ListNode *next;
  };


void printarr(int* arr, int size);

void printlist(struct ListNode *head);

void initlist();

extern struct ListNode list1[5];
#endif
