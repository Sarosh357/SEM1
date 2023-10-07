/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses while statement to print the sum of the digits of a given number
*/

#include <stdio.h>

int main () {
// Variable declaration.
    int sum = 0, digit = 0, number;

    // Takes the number whose sum of digits is to be found.
    printf("Enter the number whose sum of digits need to be found:\n");
    scanf("%d", &number);

    // While loop checks while number is greater than 0.
    while(number>0) {
        digit = number%10;
        sum += digit;
        number /= 10;
    }

    // Outputting the sum of the digits.
    printf("\n The sum is %d", sum);
    
    return 0;

}
