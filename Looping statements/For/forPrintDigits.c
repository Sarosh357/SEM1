/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses for loop to print the digits of a given number.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int digit, index, number;

    // Takes the number from the user.
    printf("Enter a number\n");
    scanf("%d", &number);

    // For loop iterates as long as number is not equal to 0.
    for(; number != 0;) 
    {
        digit = number % 10;
        printf("%d\n", digit);
        number /= 10;
    }

    return 0;
}

/*
 OUTPUT:
 Enter a number
 210
 0
 1
 2
*/