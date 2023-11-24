/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the transpose of an array.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int a[10][10], row, col, n_row, n_col;

    // Gets the number of rows and columns from the user.
    printf("Enter number of rows and columns of the array: ");
    scanf("%d %d", &n_row, &n_col);

    printf("\nEnter the elements of the array: ");
    for (row = 0; row < n_row; row++)
    {
        for (col = 0; col < n_col; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }
    
    // Printing before transposing the array.
    printf("Before swapping: ");
    for (row = 0; row < n_row; row++)
    {
        printf("\n");
        for (col = 0; col < n_col; col++)
        {
            printf("%d\t", a[row][col]);
        }
    }

    printf("\nAfter swapping: ");
    for (col = 0; col < n_col; col++)
    {
        printf("\n");
        for (row = 0; row < n_row; row++)
        {
            printf("%d\t", a[row][col]);
        }
    }

return 0;  

}