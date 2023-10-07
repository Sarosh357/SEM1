/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses do-while statement to print the reverse of a number.
*/

#include <stdio.h>

int main () {
    // Variable declaration.
    int digit = 0, reverse = 0, number;

    // Takes the number from the user.
    printf("Enter the number:\n");
    scanf("%d", &number);

    // Do-while loop iterates till number is not equal to 0.
    do {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10; 
    } while(number != 0);
    
    // Prints the reverse of the number.
    printf("\nThe reverse of the number is %d", reverse);

    return 0;
}