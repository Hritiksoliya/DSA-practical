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
            ptr = ptr->next;
        }
    }
}

int main()
{

    head = createNode(10);
    display_list(head);
    getch();
    return 0;
}