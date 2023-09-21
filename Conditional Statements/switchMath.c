/*
Class: Programming in C
Subject Code: 23BCA1C04
Name: Sarosh
Description: This program performs arithmetic operations using switch statement.
*/

#include <stdio.h>
int main() {
    // variable declaration. 
    int a, b, res, choice;
    
    // user is asked to enter two numbers.
    printf("\nEnter two numbers:\n");
    scanf("%d %d", &a, &b);

    // variable choice is inputted to perform given arithmetic operation.
    printf("\nEnter choice \t 1 = ADD \t 2 = SUB \t 3 = MUL \t 4 = DIV\n");
    scanf("%d", &choice);
    
    // Switch statement for checking the value of the variable 'choice'.
    switch(choice) {
        case 1:
        res = a+b;
        printf("\nResult of %d + %d is %d", a, b, res);
        break;

        case 2:
        res = a-b;
        printf("\nResult of %d - %d is %d", a, b, res);
        break;

        case 3:
        res = a*b;
        printf("\nResult of %d * %d is %d", a, b, res);
        break;

        case 4:
        res = a/b;
        printf("\nResult of %d/%d is %d", a, b, res);
        break;

        // Default case returns the execution back to function main. 
        default: 
        printf("\nWRONG CHOICE."); 
        return main();
    } 
    return 0;
}

/*
 OUTPUT:
 Enter two numbers: 
 2500
 5
 Enter choice    1 = ADD         2 = SUB         3 = MUL         4 = DIV
 4
 Result of 2500/5 is 500
*/