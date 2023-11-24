/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code checks whether a given matrix is an identity matrix or not.
*/

#include <stdio.h>

void arrayInput(int);
void transposeCheck(int);

int a[10][10];
int order;

int main() {
    int row, col;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    if(row != col)
    {
        printf("\nThe number of rows is not equal to the number of columns.\nHenceforth, the matrix cannot be an identity matrix.");
        return 0;
    }
    order = row;
    printf("Enter the elements of the array ");
    arrayInput(order);
    transposeCheck(order);

}

void arrayInput(int order) {
    int i, j;

    for(i = 0; i < order; i++)
    {
        for(j = 0; j < order; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void transposeCheck(int order) {
    int i, j, flag = 1;
    
    for(i = 0; i < order; i++)
    {
        for(j = 0; j < order; j++)
        {
            if(a[i][j] != 1 && a[j][i] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag==1)
    {
        printf("The matrix is a identity matrix");
    }
    else
    {
        printf("The matrix is not an identity matrix");
    }
}