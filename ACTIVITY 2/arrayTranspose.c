/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the transpose of an array.
*/

#include <stdio.h>

void arrayInput(int, int);
void arrayOutput(int, int);
void arrayTranspose(int, int);

int a[10][10];
int row, col;

int main() {
    // Variable declaration.
    int n_row, n_col;

    // Gets the number of rows and columns from the user.
    printf("Enter number of rows and columns of the array: ");
    scanf("%d %d", &n_row, &n_col);

    arrayInput(n_row, n_col);
    arrayOutput(n_row, n_col);
    arrayTranspose(n_row, n_col);
    
    return 0;  
}

void arrayInput(int n_row, int n_col) {
    int i, j;
    
    printf("Enter the elements of the array: ");
    for (row = 0; row < n_row; row++)
    {
        for (col = 0; col < n_col; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }
}

void arrayOutput(int n_row, int n_col) {
    printf("\nBefore swapping");
    
    for (row = 0; row < n_row; row++)
    {   printf("\n");
        for (col = 0; col < n_col; col++)
        {
            printf("%d\t", a[row][col]);
        }
    }
}

void arrayTranspose(int n_row, int n_col) {
    printf("\nAfter swapping");
    
    for (col = 0; col < n_col; col++)
    {
        printf("\n");
        for (row = 0; row < n_row; row++)
        {
            printf("%d\t", a[row][col]);
        }
    }
}