/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code checks whether the inputted integer is positive or negative using simple if-else.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int a;

    // Takes an integer from the user.
    printf("Enter a number:\n");
    scanf("%d", &a);

    // if-else block checks the sign of integer and outputs the result.
    if(a>0) {
        printf("\nThe number is positive.");
    } else {
        printf("\nThe number is negative.");
    }

    return 0;
}

/*
 OUTPUT:
 Enter a number: 
 10

 The number is positive.
*/