/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the factorial of a given number using recursion.
*/

#include <stdio.h>

int factorial(int);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of the given number is %d", factorial(n));
    return 0;
}

int factorial(int n) {
    int fact=1;
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else
    return(n*factorial(n-1));
}