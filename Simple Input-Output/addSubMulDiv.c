/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code prints the addition, subtraction, multiplication, and division of two numbers inputted by the user.
*/

#include <stdio.h>

int main () {
    // Variable declaration.
    float number1, number2, sum = 0, subtract = 0, multiply = 0, divide = 0;
    
    // Taking 2 inputs from the user.
    printf("Enter the first number: ");
    scanf("%f", &number1);
    printf("\nEnter the second number: ");
    scanf("%f", &number2);
    
    // Operating on the two inputted variables. 
    sum = number1 + number2;
    subtract = number1 - number2;
    multiply = number1 * number2;
    divide = number1 / number2;
    
    // Outputting the results.
    printf("\nFor the numbers %.2f and %.2f", number1, number2);
    printf("\nThe sum is %.2f", sum);
    printf("\nThe subtraction is %.2f", subtract);
    printf("\nThe multiplication is %.2f", multiply);
    printf("\nThe division is %.2f", divide);
    
    return 0;
}

/*
 OUTPUT:
 Enter the first number: 5
 Enter the second number: 10
 For the numbers 5.00 and 10.00
 The sum is 15.00
 The subtraction is -5.00
 The multiplication is 50.00
 The division is 0.50
 */