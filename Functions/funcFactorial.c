/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the factorial of a given number using functions.
*/

int factorial(int);

#include <stdio.h>

int main() {
    
    int number, result; 
    
    printf("Enter the number whose factorial is to be found: ");
    scanf("%d", &number);

    printf("The factorial of the given number is %d", factorial(number));

    return 0;
}

int factorial(int a) {
    int index, fact = 1;
    
    for (index = a; index > 0; index--) 
    {
        fact = fact*index;
    }
    return fact;
}