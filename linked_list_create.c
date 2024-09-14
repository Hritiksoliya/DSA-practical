#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node * next;
}Node;

Node * createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main(){

    Node * n1=createNode(10);
    printf("%d\n",n1->data);
    getch();
return 0;
}