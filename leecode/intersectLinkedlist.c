#include <stdio.h>
#include <stdlib.h>

struct listNode
{
    int val;
    struct listNode *next;
};

void printNode(const char *name, struct listNode *pNode)
{
    if (pNode == NULL)
        printf("%s,NULL\t", name);
    else
        printf("%s:%d\t", name, pNode->val);
}
struct listNode *getIntersectionNode(struct listNode *headA, struct listNode *headB)
{
    struct listNode *pHeadA = headA;
    struct listNode *pHeadB = headB;

    while ((pHeadA != pHeadB) && (pHeadA->next != NULL && pHeadB->next != NULL))
    {
        if (pHeadA->next)
            pHeadA = pHeadA->next;
        else
            pHeadA = headB;
        if (pHeadB->next)
            pHeadB = pHeadB->next;
        else
            pHeadB = headA;
    }
    if (pHeadA == pHeadB)
        return pHeadA;
    else
        return NULL;
}

void test1()
{
    struct listNode node1;
    node1.val = 1;
    node1.next = NULL;

    struct listNode *headA = &node1;
    struct listNode *headB = &node1;
    struct listNode *intersectionNode = getIntersectionNode(headA, headB);

    if (intersectionNode)
        printf("intersectionNode node value: %d\n", intersectionNode->val);
    else
        printf("no intersection!\n");
}

void test2()
{
    struct listNode node1;
    node1.val = 2;
    struct listNode node2;
    node2.val = 6;
    struct listNode node3;
    node3.val = 4;
    struct listNode node4;
    node4.val = 1;
    struct listNode node5;
    node5.val = 5;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;
    node4.next = &node5;
    node5.next = NULL;

    struct listNode *headA = &node1;
    struct listNode *headB = &node4;
    struct listNode *intersectionNode = getIntersectionNode(headA, headB);

    if (intersectionNode)
        printf("intersectionNode node value: %d\n", intersectionNode->val);
    else
        printf("no intersection!\n");
}

int main(int argc, char **argv)
{
    /*
    if(NULL)
        printf("NULL\n");
    else
        printf("NOT NULL\n");
    if(NULL==NULL)
        printf("true\n");
    else
        printf("true\n");
*/
    printf("test1\n");
    test1();
    printf("test2\n");
    test2();
}
