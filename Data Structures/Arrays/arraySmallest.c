/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the smallest element of a given array.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int array[10], number, index, small;

    // Takes the number of terms and elements of the array from the user.
    printf("Enter the number of terms in the array: ");
    scanf("%d", &number);

    printf("Enter the elements of the array: ");
    
    for(index = 0; index < number; index++)
    {
        scanf("%d", &array[index]);
    }

    // Assuming the smallest element is the first element of the array and comparing it with the rest of the elements.
    small = array[0];

    for(index = 1; index < number; index++)
    {
        if(small>array[index])
        {
            small = array[index];
        }
    }

    // Outputting the smallest element. 
    printf("The smallest element of the array is %d", small);

    return 0;
}