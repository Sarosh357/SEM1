/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code adds two, 2-dimensional arrays.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int a[10][10], b[10][10], c[10][10];
    int row, col, n_row, n_col;

    // Takes the number of rows and columns for both the arrays from the user.
    printf("Enter the number of rows and columns of both the arrays: ");
    scanf("%d %d", &n_row, &n_col);

    // Takes the elements of both the arrays.
    printf("Enter the elements of the first array: ");
    for(row = 0; row < n_row; row++)
    {
        for(col = 0; col < n_col; col++) 
        {
            scanf("%d", &a[row][col]);
        }
    }

    printf("Enter the elements of the second array: ");
    for(row = 0; row < n_row; row++)
    {
        for(col = 0; col < n_col; col++) 
        {
            scanf("%d", &b[row][col]);
            // Adding the arrays in the second loop to reduce redundency.
            c[row][col] = a[row][col] + b[row][col];
        }
    }

    // Prints the sum of the two arrays.
    printf("Sum of the two arrays: ");
    for(row = 0; row < n_row; row++)
    {
        printf("\n");
        for(col = 0; col < n_col; col++) 
        {
            printf("%d\t", c[row][col]);
        }
    }

return 0;

}