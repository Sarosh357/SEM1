/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code calculates the area of a square with the length and breadth inputted by the user.
*/

#include <stdio.h>

int main () {
    // Variable declaration
    float length, breadth, area = 0;

    // Takes the length and breadth from the user.
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Checks if the dimensions given from the user are +ve, returns to main function if any of the value is -ve. 
    if(length<=0||breadth<=0) {
        printf("\nNegative dimensions given. Please re-input the values.\n");
        return main();
    }
    
    // Calculates the area of the rectangle.
    area = length*breadth;
    
    // Outputs the result.
    printf("\nThe area of the rectangle is %.2f", area);
    return 0;
}

/*
 OUTPUT:
 Enter the length of the rectangle: 5
 Enter the breadth of the rectangle: 10
 The area of the rectangle is 50.00
 */