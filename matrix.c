#include<stdio.h>

int main(){

    int row1,row2,column1,column2;
    printf("enter the first matrix row :");
    scanf("%d",&row1);

    printf("enter the first matrix column :");
    scanf("%d",&row1);
    int matrix1[row1][column1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            printf("enter the %d row and %d column of first matrix:");
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            printf("%d\t",matrix1[i][j]);
        }printf("\n");
    }

    start : second;
    printf("enter the second matrix row :");
    scanf("%d",&row2);

    printf("enter the second matrix column :");
    scanf("%d",&column2);
    int matrix1[row2][column2];
    

    if(column1!=row2);
    {
        printf("plz enter the first matrix column and second matrix row equal : ");
        goto :second;
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            printf("enter the %d row and %d column of first matrix:");
            scanf("%d",&matrix2[i][j]);
        }
    }


    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }

    int mul[column1][row2];
    for(int i=0;i<column1;i++){
        for(int j=0;j<row2;j++){
         mul[i][j]=0;
        }
    }

    for(int i=0;i<column1>1;i++){
        for(int j=0;j<row2;j++){
            for(int k=0;k<row1;k++)
            {
             mul[i][j]+=matrix[i][k] * matrix2[k][j];
            }
        }
    }

printf("multiply of the matrix is :\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }



}