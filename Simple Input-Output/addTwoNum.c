/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code prints the addition of two numbers inputted by the user.
*/

// Including/Importing standard input-output header file.
#include <stdio.h> 

int main() {
    // Variable declaration
    int num1,  num2, sum = 0;
    
    // User inputs the value of the first and second number.
    printf("Enter value of the first number: ");
    // %d is for int.
    scanf("%d", &num1); 
    
    printf("\nEnter value of the second number: ");
    // & is for addressing.
    scanf("%d", &num2);
    
    // Calculates the sum.
    sum = num1 + num2;
    
    // Outputs the result.
    printf("\nThe result is %d", sum); // No need for & in output
}

/*
OUTPUT:
Enter value of the first number: 10
Enter value of the second number: 20
The result is 30
*/