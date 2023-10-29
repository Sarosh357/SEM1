/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the sum of only the odd elements of an array.
*/

#include <stdio.h>

int main() {
    // Variable declaration
    int array[10], number, index, sum = 0;

    // Takes the number of terms and the elements of the array from the user.
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Enter the elements of the array: ");
    
    // As the element is entered, it is added to variable sum if it is odd.
    for(index = 0; index < number; index++)
    {
        scanf("%d", &array[index]);
        if(array[index]%2!=0) 
        {
            sum += array[index];
        }
    }

    // Outputs the sum of the odd elements of the array.
    printf("The sum of the odd elements of the given array is %d.", sum);
    
    return 0;
}