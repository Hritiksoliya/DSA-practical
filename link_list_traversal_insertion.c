#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

// linked list traversal
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// case insert At First
struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
// case insert At Index no.
struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// case insert At End
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
// case insert At after a node
struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));


    head->data=7;
    head->next=second;
    second->data=10;
    second->next=third;
    third->data=17;
    third->next=fourth;
    fourth->data=77;
    fourth->next=NULL;

    // print before insertion 
    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    // head=insertAtFirst(head,1111);
    // head=insertAtIndex(head,1111,2);
    // head=insertAtEnd(head,1111);
    head=insertAfterNode(head,third,1111);

    printf("Linkedlist After insertion\n");
    linkedListTraversal(head);
    return 0;
}
