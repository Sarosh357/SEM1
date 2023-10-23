/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses while statement to print the sum of n number of natural numbers starting from 0.
*/

#include <stdio.h>

int main() {
    // Variable declaration. Testing short int datatype.
    int sum = 0, index = 0;
    short int maxTerm;
    
    // Takes the number of terms the loop should iterate for.
    printf("Enter the number of terms:\n");
    scanf("%d", &maxTerm);

    // Checks if the User has inputted a -ve number or zero, returns to main function if the value is -ve. 
    if(maxTerm<=0) {
        printf("\nWrong number of terms. Please re-input the value.\n");
        return main();
    }
    
    // Looping statement, the loop iterates as long as the number of terms is greater than or equal to variable c (incrementing variable).
    for (;maxTerm >= index;) 
    {
        sum += index;
        index++;
    }
    
    // Outputs the result.
    printf("Sum of %d terms is %d", maxTerm, sum);
    
    return 0;
}

/*
 OUTPUT:
 5
 Sum of 5 terms is 15
*/