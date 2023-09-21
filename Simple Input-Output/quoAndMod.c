/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the quotient and remainder of two numbers taken by the User.
*/

#include <stdio.h>

int main () {
    // Variable declaration
    int num1, num2, quotient = 0, mod = 0;
    
    // Takes the dividend and divisor from the User.
    printf("Enter the dividend: ");
    scanf("%d", &num1);
    printf("\nEnter the divisor: ");
    scanf("%d", &num2);

    // Calculating the quotient and remainder(mod).
    quotient = num1/num2; 
    mod = num1 % num2;
    
    // Outputs the result.
    printf("\nThe quotient is %d and the remainder is %d for the given numbers.", quotient, mod);
    return 0;
}

/* OUTPUT:
 Enter the dividend: 26
 Enter the divisor: 5
 The quotient is 5 and the remainder is 1 for the give nnumbers.
 */
