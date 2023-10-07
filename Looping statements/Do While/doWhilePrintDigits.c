/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses do-while statement to print the digits of a given number
*/

#include <stdio.h>

int main () {
    // Variable declaration.
    int digit = 0, number;

    // Takes the number from the user.
    printf("Enter the number whose digits need to be printed:\n");
    scanf("%d", &number);
    
    // do-while loop iterates till number is greater than 0.
    do {
        digit = number%10;
        number /= 10;
        printf("%d\n", digit);
    } while(number>0); 

    return 0;
}