/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses while statement to print the sum of n number of natural numbers starting from 0.
*/

#include <stdio.h>

int main() {
    // Variable declaration. Testing short int datatype.
    int sum = 0, c = 0;
    short int n;
    
    // Takes the number of terms the loop should iterate for.
    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    // Checks if the User has inputted a -ve number, returns to main function if the value is -ve. 
    if(n<0) {
        printf("\nWrong number of terms. Please re-input the value.\n");
        return main();
    }
    
    // Looping statement, the loop iterates as long as the number of terms is greater than or equal to variable c (incrementing variable).
    while(n>=c) {
        sum += c;
        c++;
    }
    
    // Outputs the result.
    printf("Sum of %d terms is %d", n, sum);
    
    return 0;
}

/*
 OUTPUT:
 5
 Sum of 5 terms is 15
*/