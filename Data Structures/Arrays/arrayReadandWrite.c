/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code reads and writes into an array.
*/

#include <stdio.h>

int main() {
    // Variable declaration
    int array[10], index, number;

    // Takes the number of terms and the elements of the array from the user.
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Enter the elements of the array: ");
    
    for(index = 0; index < number; index++) 
    {
        scanf("%d", &array[index]);
    }

    // Outputs the elements of the array.
    printf("Elements of the array are:\t");
    for(index = 0; index < number; index++)
    {
        printf("%d\t", array[index]);
    }

    return 0;
}