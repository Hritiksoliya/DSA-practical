#include <stdio.h>
#include <stdlib.h>
void traversal();
void insartion();
void deletion();
int front = -1;
int rear = -1;
int arr[10];
int main()
{
    system("cls");
    int option;
    while (1)
    {
        printf("1 : insartion\n");
        printf("2 : traversal\n");
        printf("3 : deletion\n");
        printf("0 : exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 0:
            exit(1);
            break;
        case 1:
            if (front == 9 && rear == 9)
            {
                front = -1;
                rear = -1;
            }
            front = +1;
            printf("\nEnter the element : ");
            scanf("%d", &arr[front]);
            break;
        case 2:
            for (int i = 0; i < front; i++)
            {
                printf("element is : %d\n", arr[i]);
            }
            break;
        case 3:
            if (front == 9 && rear == 9)
            {
                front = -1;
                rear = -1;
            }
            rear = +1;
            break;
        default:
            printf("\ninvalid option !!!!\n");
            break;
        }
    }

    return 0;
}
void insartion()
{
    if (front == 9 && rear == 9)
    {
        front = -1;
        rear = -1;
    }
    front = +1;
    printf("\nEnter the element : ");
    scanf("%d", &arr[front]);
    return;
}
void deletion()
{
    if (front == 9 && rear == 9)
    {
        front = -1;
        rear = -1;
    }
    rear = +1;
}
void traversal()
{
    for (int i = 0; i < front; i++)
    {
        printf("element is : %d\n", arr[i]);
    }
}
