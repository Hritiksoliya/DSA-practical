#include <stdio.h>
#include <stdlib.h>
//node type structure 
struct node
{
    int data;
    //for store next list address
    struct node *next;
};
//function for treversal list
void trevre_link(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    //allocate memory by malloc 
    struct node *num1 = (struct node *)malloc(sizeof(struct node));
    struct node *num2 = (struct node *)malloc(sizeof(struct node));
    struct node *num3 = (struct node *)malloc(sizeof(struct node));
    //link all list
    num1->data = 6260;
    num1->next = num2;
    num2->data = 3137;
    num2->next = num3;
    num3->data = 99;
    num3->next = NULL;
    // function call
    trevre_link(num1);
    return 0;
}