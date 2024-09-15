#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *head = NULL;
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void display_list(struct Node *head)
{

    struct Node *ptr = head;
    if (head == NULL)
    {
        printf("linked list is empty:");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("linkedlist element:%d \n", (ptr->data));
            ptr = (Node *)ptr->next;
        }
    }
}
Node *insert_at_first(Node *head, int data)
{

    Node *new = createNode(data);
    new->next = head;
    printf("\ninserted at first\n");
    return new;
}
void insert_at_end(Node *head, int data)
{

    Node *new = createNode(data), *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
    printf("\ninserted at End\n");
    return;
}
void insert_after_data(Node *head, int data, int insert_after)
{
    Node *new = createNode(data);
    Node *ptr = head;
    while (ptr->data != insert_after)
    {
        ptr = ptr->next;
    }
    new->next = ptr->next;
    ptr->next = new;
    printf("\ninserted after data : %d\n", insert_after);
    return;
}
Node *delete_at_first(Node *head)
{
    if (head==NULL)
    {
        printf("linked list is empty");
    }
    
    Node *ptr = head;
    head = ptr->next;
    free(ptr);
    printf("delete at firsst:\n");
    return head;
}
void delete_at_last(Node *head)
{
    Node *ptr = head, *pre;
    if (head==NULL)
    {
        printf("linked list is empty");
    }
    while (ptr->next != NULL)
    {
        pre = ptr;
        ptr = ptr->next;
    }
    pre->next = NULL;
    free(ptr);
    printf("deleted at last :\n");
    return;
}
void delete_after(Node *head, int del_after)
{
    Node *ptr = head;
    Node *pre = NULL;
    while (ptr != NULL && ptr->data != del_after) {
        pre = ptr;
        ptr = ptr->next;
    }
    if (ptr == NULL || ptr->next == NULL) {
        printf("Item not found for after deletion\n");
        return;
    }
    Node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
    printf("Deleted after %d\n", del_after);
    
}
int main()
{

    head = createNode(10);
    display_list(head);
    head = insert_at_first(head, 40);
    display_list(head);
    insert_at_end(head, 300);
    display_list(head);
    insert_after_data(head, 50, 10);
    display_list(head);
    head = delete_at_first(head);
    display_list(head);
    delete_at_last(head);
    display_list(head);
    insert_at_first(head,45);
    display_list(head);
    delete_after(head,10);
    display_list(head);

    return 0;
}