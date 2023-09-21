/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code checks the greatest between two numbers or if they're equal.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int number1, number2;

    // Takes two numbers from the user.
    printf("Enter two numbers:\n");
    scanf("%d %d", &number1, &number2);
    
    // if-else if block to compare the two integers and output the result.
    if(number1>number2) {
        printf("\n%d is greater than %d", number1, number2);
    } 
    else if(number2>number1) {
        printf("\n%d is greater than %d", number2, number1);    
    } 
    else { 
        printf("\nThe numbers are equal.");
    }

    return 0;
}

/*
OUTPUT:
 Enter two numbers: 
 50
 60

 60 is greater than 50
*/