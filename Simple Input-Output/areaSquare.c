/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code calculates the area of a square with the side-length provided by the User. 
*/

#include <stdio.h>

int main () {
    // Variable declaration.
    float side, area = 0;
    
    // Takes the length of the side from the user.
    printf("Enter the side of the square:");
    scanf("%f", &side);

    // Checks if the side length inputted by the User is +ve. Returns to main function if value is -ve.
    if(side<0) {
        printf("\nNegative side length given. Please re-input the value\n");
        return main();
    }

    // Calculates the area of the square.    
    area = side*side;
    
    // Outputs the result.
    printf("\nThe area of the square is %.2f", area);
    return 0;
}

/*
 OUTPUT:
 Enter the side of the square:5
 The area of the square is 25.00
 */