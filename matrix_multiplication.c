#include <stdio.h>


int main()
{
    int row1, row2, column1, column2;
    
    // Input the value of rows and columns for the first matrix
    printf("Enter the number of rows for 1st matrix :" );
    scanf("%d", &row1);
    printf("Enter the number of columns for 1st matrix : ");
    scanf("%d", &column1);
    int matrix1[row1][column1];

    // Input values for the first matrix
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("Enter the value for %d row and %d column of 1st matrix: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Print the first matrix
    printf("Matrix 1:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf(" %d", matrix1[i][j]);
        }
        printf("\n");
    }

    // Input the value of rows and columns for the second matrix
    printf("Enter the number of rows for 2nd matrix :");
    scanf("%d", &row2);
    printf("Enter the number of columns for 2nd matrix ");
    scanf("%d", &column2);
    int matrix2[row2][column2];

    // Ensure the number of columns in matrix1 equals the number of rows in matrix2 for multiplication
    if (column1 != row2)
    {
        printf("Matrix multiplication is not possible due to incompatible dimensions.\n");
        return 1;
    }

    // Input values for the second matrix
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("Enter the value for %d row and %d column of 2nd matrix: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Print the second matrix
    printf("Matrix 2:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf(" %d", matrix2[i][j]);
        }
        printf("\n");
    }
    int mul[row1][column2];

    // Initialize result matrix to 0
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            mul[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            for (int k = 0; k < column1; k++)
            {
                mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("The product of the two matrices:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf(" %d", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
