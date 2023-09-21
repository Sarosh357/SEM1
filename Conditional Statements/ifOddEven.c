/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code checks whether the inputted integer is odd or even.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int number;

    // Takes an integer from the user.
    printf("Enter a number:\n");
    scanf("%d", &number);

    // if-else block checks if the integer is divisible by 2 (if yes, then it is even) and outputs the result.
    if(number%2==0) {
        printf("\nThe number is even.");
    } else {
        printf("\nThe number is odd.");
    } 
    
    return 0;
}

/*
 OUTPUT:
 Enter a number: 
 7
 The number is odd.
*/