/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the length of a string.
*/

#include <stdio.h>

void swap(int *, int *);

int main() {
    // Variable declaration.
    int num1, num2;

    // Takes two numbers from the user.
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // Prints before swapping the two variables.
    printf("Before swapping:\t a = %d\t b = %d", num1, num2);
    swap(&num1, &num2);
    return 0;
}

void swap(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
printf("\nAfter swapping:\t\t a = %d\t b = %d", *x, *y);

}