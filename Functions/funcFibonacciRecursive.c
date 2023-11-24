/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code generates a number of fibonacci numbers using recursive functions.
*/

int fibonacci(int);

#include <stdio.h>

int main() {
    
    int i, number;

    printf("Enter the number of fibonacci number terms: ");
    scanf("%d", &number);

    printf("The fibonacci series of %d numbers is: ", number);
    
    for(i = 0; i < number; i++)
    {
        printf("\t%d", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n) {
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {   
        return 1;
    }
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}