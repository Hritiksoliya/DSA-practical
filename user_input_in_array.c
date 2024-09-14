#include <stdio.h>
int array()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int array[size];
    printf("Array created Sucessfully of %d \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("\n Element Stored successfully...\n");
    printf("\nOuptut\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }
}
int main()
{
    array();
    return 0;
}
 