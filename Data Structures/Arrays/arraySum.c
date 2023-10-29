/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the sum of the elements of an array.
*/

#include <stdio.h>

int main() {
    // Variable declaration
    int array[10], number, index, sum = 0;

    // Takes the number of terms and the elements of the array from the user.
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Enter the elements of the array: ");
    
    // As the element is entered, it is added to variable sum.
    for(index = 0; index < number; index++)
    {
        scanf("%d", &array[index]);
        sum += array[index];
    }

    // Outputs the sum of the elements of the array.
    printf("The sum of the elements of the given array is %d.", sum);
    
    return 0;
}