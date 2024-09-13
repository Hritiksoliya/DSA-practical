#include<stdio.h>
#define MAX_SIZE=10;

int main(){

    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];

    printf("Enter The number of first array element :");
    scanf("%d",&size)

    for(int i=0;i<size;i++){

        printf("Enter the value of %d element :",i+1);
        scanf("%d",&arr1[i]);
        
    }

    printf("copying element::\n");

      for(int i=0;i<size;i++){

        arr2[i]=arr1[i];
        
    }
    printf("printing second array element : ");
    for(int i=0;i<size;i++){

        printf("%d\n",arr2[i]);

        
    }

    
return 0;
}