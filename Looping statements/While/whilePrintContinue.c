/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses while statement to print N natural numbers (starting from 1) except 5 using continue.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int index = 0, maxTerm;

    // Takes the number of natural numbers to be printed from the user.
    printf("Enter the number of natural numbers to be printed: ");
    scanf("%d", &maxTerm);

    // While loop increments iteration variable and checks if it is equal to 5 at any point of the looping.
    while(index<maxTerm) {
        index++;
        
        if(index==5) {
            printf("Skipping 5!\n");
            continue;
        }
        // Printing the iteration.
        printf("%d\n", index);

    }
    
    return 0;
}