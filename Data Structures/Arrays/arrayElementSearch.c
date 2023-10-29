/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code searches a given element in an array.
*/

#include <stdio.h>

int main() {
    // Variable declaration
    int array[10], index, number, searchElement;
    int short flag;

    // Takes the number of terms, array, and element to be searched from the user.
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Enter the array: ");
    
    for(index = 0; index < number; index++)
    {
        scanf("%d", &array[index]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &searchElement);

    // For loop goes through every element of the array and checks if any of them match the search element.
    for(index = 0; index < number; index++)
    {
        if(array[index] == searchElement) {
            flag = 1;
            break;
        } else { 
        flag = 0;
        }
    }

    if(flag == 1)
    {
        printf("The element %d is found at index %d.", searchElement, index);
    } else {
    printf("The element was not found.");
    }
    
    return 0;
}