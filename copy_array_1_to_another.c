#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int sourceArray[MAX_SIZE];
    int destinationArray[MAX_SIZE];
    int *srcPtr = sourceArray;
    int *destPtr = destinationArray;
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("\nEnter %d array elements-\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &(*(sourceArray + i)));
    }
    // Copy elements using pointers
    for (int i = 0; i < size; i++)
    {
        *(destPtr + i) = *(srcPtr + i);
    }
    // Display the copied array
    printf("\nCopied Array-\n");
    printf("printing the destination array content:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", destinationArray[i]);
    }
}