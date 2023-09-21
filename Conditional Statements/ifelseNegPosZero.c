/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code checks whether the inputted integer is positive, negative, or zero.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int a;

    // Takes an integer from the user.
    printf("Enter a number: ");
    scanf("%d", &a);
    
    // Simple if statement to check whether the number is +ve, -ve, or zero.
    if(a>0) {
        printf("\n The number is positive.");
    } 
    else if(a<0) {
        printf("\n The number is negative.");
    } 
    else {
        printf("\n The number is zero.");
    } 
    
    return 0;
}

/*
 OUTPUT:
 Enter a number: 0
 The number is zero.
*/