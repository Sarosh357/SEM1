/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code swaps the values of two variables without using a temporary variable.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int number1, number2;

    // Takes two integers from the User and outputs it before swapping the values.
    printf("Enter two numbers: \n");
    scanf("%d %d", &number1, &number2);
    printf("\nBefore swapping: \t a = %d, b = %d", number1, number2);
    
    // Swapping the values of the two integers.
    number1 = number1+number2;
    number2 = number1-number2;
    number1 = number1-number2;
    
    // Outputs the result after swapping.
    printf("\nAfter swapping: \t a = %d, b = %d", number1, number2);
    return 0;
}

/*
 OUTPUT: 
 Enter two numbers: 
 50
 20

 Before swapping:        a = 50, b = 20
 After swapping:         a = 20, b = 50
 */