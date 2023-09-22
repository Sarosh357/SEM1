/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the greatest between two numbers using ternary operator.
*/

#include <stdio.h>

int main() {
    int number1, number2;

    // Takes two integers from the user.
    printf("Enter two numbers:\n");
    scanf("%d %d", &number1, &number2);
    
    // Syntax: (condition) ? statementTrue : statementFalse; 
    (number1>number2) ? printf("%d is greater than %d.", number1, number2) : printf("%d is greater than %d.", number2, number1);
    
    return 0;
}

/*
 OUTPUT:
 Enter two numbers:
 5
 10
 10 is greater than 5.
*/