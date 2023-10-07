/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses do-while statement to count the digits of a number.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int number; 
    short int count = 0;

    // Takes the number from the user.
    printf("Enter the number whose digits need to be counted:\n");
    scanf("%d", &number);

    // Do-while loop iterates till number is greater than 0.
    do {
        number/=10;
        count++;
    } while(number>0);

    // Prints the number of digits present.
    printf("\nThe number of digits are %d", count);

    return 0;
}