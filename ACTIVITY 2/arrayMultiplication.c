/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code multiplies two 2D arrays.
*/

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int row1, row2, col1, col2, i, j, k, n;

    printf("Enter the row and col of the first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the row and col of the second matrix: ");
    scanf("%d %d", &row2, &col2);

    if(col1!=row2)
    {
        printf("The number of rows of the first matrix is not equal to the number of columns of the second matrix.\nThe multiplication is not possible.\n\n");
        return main();
    }

    printf("Enter the elements of the first matrix: ");
    for(i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: ");
    for(i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    
    for(i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++)
        {
            c[i][j] = 0;
            for(n = 0; n < row1; n++)
            {
                c[i][j] += a[i][n] * b[n][j]; 
            }
        }
    }

    printf("The product of the matrix is ");
    for(i = 0; i < row1; i++)
    {
        printf("\n");
        for(j = 0; j < col2; j++)
        {
            printf("%d\t", c[i][j]);
        }
    }

    return 0;
}
