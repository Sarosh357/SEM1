/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code checks the greatest between two numbers.
*/

#include <stdio.h>
int main() {
    // Variable declaration.
    int number1, number2;

    // Takes two integers from the user.
    printf("Enter two numbers:\n");
    scanf("%d %d", &number1, &number2);
    
    // Simple if-else block to display the largest of two integers.
    if (number1>number2) {
        printf("\n%d is larger than %d.", number1, number2);
    } else {
        printf("\n%d is larger than %d", number2, number1);
    }
    
    return 0;
}

/*
 OUTPUT:
 Enter two numbers: 
 50
 69

 69 is larger than 50
*/