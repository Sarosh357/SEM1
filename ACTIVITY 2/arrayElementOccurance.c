/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the number of occurances of a given number in an array.
*/

#include <stdio.h>

int search(int[], int, int);
void result(int, int);

int main() {
    // Variable declaration
    int array[10], index, number, searchElement;
    int short count;

    // Takes the number of terms, array, and element to be searched from the user.
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Enter the array: ");
    
    for (index = 0; index < number; index++)
    {
        scanf("%d", &array[index]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &searchElement);

    count = search(array, searchElement, number);
    result(count, searchElement);
    return 0;
}

int search(int array[], int searchElement, int number) {
    int index, count = 0;

    // For loop goes through every element of the array and checks if any of them match the search element.
    for (index = 0; index < number; index++)
    {
        if (array[index] == searchElement)
        {
            count++;
        }
    }

    return count;
}

void result(int count, int searchElement) {

 if (count >= 1)
    {
        printf("The element %d is found %d times.", searchElement, count);
    }
    else 
    {
        printf("The element was not found.");
    }
    
}