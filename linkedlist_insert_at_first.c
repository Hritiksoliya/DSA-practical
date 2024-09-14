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
            ptr =(Node  *) ptr->next;
        }
    }
}

Node * insert_at_first(Node * head,int data){

    Node * new=createNode(data);
    new->next=head;
    printf("inserted at first\n");
    return new;

}
int main()
{

    head = createNode(10);
    head=insert_at_first(head,40);
    display_list(head);
    return 0;
}