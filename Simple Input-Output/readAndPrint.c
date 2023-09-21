/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code reads and prints variables of different data types.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int number;
    float decimal;
    char c;
    
    // Takes a character, a number, and a floating point number from the User.
    printf("Enter a character: ");
    scanf("%c", &c);
    
    printf("\nEnter a number: ");
    scanf("%d", &number);
    
    printf("\nEnter a floating number: ");
    scanf("%f", &decimal);

    // Outputs the result.
    printf("\nValue of integar: %d, Value of float: %f, value of char: %c", number, decimal, c);
    return 0;
}

/*
 OUTPUT:
 Enter a character: S
 Enter a number: 10
 Enter a floating number: -23.54
 Value of integar: 10, Value of float: -23.540001, value of char: S
*/