/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses do-while statement to check whether a number is palindrome.
*/

#include <stdio.h>

int main () {
    // Variable declaration.
    int digit = 0, reverse = 0, number, originalNumber;

    // Takes the number from the user.
    printf("Enter the number:\n");
    scanf("%d", &number);

    // Storing the value of number in a temporary variable.
    originalNumber = number;

    // Do-while loop iterates till number is not equal to 0.
    do {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10; 
    } while(number != 0);

    // Outputs whether the given number is a palindrome or not.   
    if(originalNumber == reverse) {
        printf("\nThe number is a palindrome.");
    } else {
        printf("\nThe number is not a palindrome.");
    }

    return 0;
}