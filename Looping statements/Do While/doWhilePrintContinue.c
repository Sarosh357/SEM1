/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses do-while statement to print n natural numbers (starting from 0) except 5 using continue.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int index = 0, maxTerm;

    // Takes the number of natural numbers to be printed from the user.
    printf("Enter the number of natural numbers to be printed:\n");
    scanf("%d", &maxTerm);

    // Do-while loop increments iteration variable and checks if it is equal to 5 at any point of the looping.
    do {
        index++;
        
        if(index==5) {
            printf("Skipping 5!\n");
            continue;
        }
        // Printing the iteration.
        printf("%d\n", index);

    } while(index<maxTerm);
    
    return 0;
}