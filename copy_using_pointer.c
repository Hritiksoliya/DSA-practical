#include<stdio.h>
#define MAX_SIZE=10;

int main(){

    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int * ptr1 = arr1;
    int * ptr2 = arr2;
    

    printf("Enter The number of first array element :");
    scanf("%d",&size)

    for(int i=0;i<size;i++){

        printf("Enter the value of %d element :",i+1);
        scanf("%d",&(*( ptr1+i)));
        
    }

    printf("copying element using pointer::\n");

      for(int i=0;i<size;i++){

        * ( prt2 + i )= *( ptr1 + i );
        
    } 
    printf("printing second array element using index : ");
    for(int i=0;i<size;i++){

        printf("%d\n",arr2[i]);

        
    }

    
return 0;
}