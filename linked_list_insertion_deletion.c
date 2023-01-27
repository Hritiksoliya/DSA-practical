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
/* ----------------------------------------------end insertion--------------------------------------------------------------------*/
// Delete at first node
struct node *deleteAtFirst(struct node *head)
{
    struct node *p=head;
    head =p->next;
    free(p);
    return head;
}
//delete at end 
struct node *deleteAtEnd(struct node* head)
{
    struct node *p=head;
    struct node *q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
// delete at Index
struct node *deleteAtIndex(struct node* head,int index)
{
    int i=0,j=0;
    struct node *p=head;
    struct node *q=head;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
     while (j!=index)
    {
        q=q->next;
        j++;
    }
    p->next=q->next;
    free(q); 
    
}
int main()
{
    system("cls");
    system("COLOR 03");
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 10;
    second->next = third;
    third->data = 17;
    third->next = fourth;
    fourth->data = 77;
    fourth->next = NULL;

    // print before insertion
    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    // head=insertAtFirst(head,1111);
    // head=insertAtIndex(head,1111,2);
    // head=insertAtEnd(head,1111);
    // head=insertAfterNode(head,third,1111);
    while (1)
    {
        int want;
    back:
        system("COLOR 03");
        printf("what do you want\n");
        printf("0 : Exit\n");
        printf("1 : Insertion in linkedlist\n");
        printf("2 : Deletion in linkedlist\n");
        printf("3 : traversal list\n");
        scanf("%d", &want);
        system("cls");
        int a;
        switch (want)
        {
        case 1:
            system("COLOR 05");
            printf("what do you want\n");
            printf("1 : Insert at First \n");
            printf("2 : Insert at Index no.\n");
            printf("3 : Insert at End \n");
            printf("4 : Insert after Node\n");
            printf("0 : Back\n");
            scanf("%d", &a);
            system("cls");
            int data;
            int index;
            switch (a)
            {
            case 1:

                printf("\nEnter the data :");
                scanf("%d", &data);
                head = insertAtFirst(head, data);
                break;
            case 2:

                printf("\nEnter the data :");
                scanf("%d", &data);
                printf("\nEnter index no.");
                scanf("%d", &index);
                head = insertAtIndex(head, data, index);
                break;
            case 3:
                printf("\nEnter the data :");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                break;
            case 4:
                printf("\nEnter the data :");
                scanf("%d", &data);
                head = insertAfterNode(head, third, data);
                break;
            case 0:
                goto back;
                break;

            default:
                printf("Invalid option");
                break;
            }
            break;
        case 2:
            system("COLOR 04");
            printf("what do you want\n");
            printf("1 : Delete at First \n");
            printf("2 : Delete at Index no.\n");
            printf("3 : Delete at End \n");
            printf("0 : Back\n");
            scanf("%d",&a);
            switch (a)
            {
            case 1:
            head=deleteAtFirst(head);
            printf("delete successfully \n");
                break;
            case 2:
            printf("Enter the index number\n");
            scanf("%d",&index);
            head = deleteAtIndex(head,index);
            printf("delete successfully \n");
                break;
            case 3:
            head =deleteAtEnd(head);
            printf("delete successfully \n");
                break;
            case 0:
                goto back;
                break;
            default:
            printf("Invalid option\n");
                break;
            }
        case 3:
            linkedListTraversal(head);
            break;

        case 0:
            exit(0);
        default:
            printf("invalid options \n");
            break;
        }
        // printf("Linkedlist After insertion\n");
        // linkedListTraversal(head);
    }
    return 0;
}


