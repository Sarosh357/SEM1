/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code calculates the area of a cirlce with the radius provided by the User. 
*/

#include <stdio.h>

int main () {
    // Variable declaration and making sure the value of pi doesn't change during the execution. 
    double radius, area = 0;
    static double PI = 3.14;

    // User inputs the radius of the circle.
    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    // Checks whether the user has inputted a negative value and returns to main() in exception.
    if(radius < 0) {
        printf("\nRadius cannot be negative, please input a valid radius. \n");
        return main();
    }

    // Calculates the area of the circle.
    area = PI*(radius*radius);
    
    // Outputs the area of the circle.
    printf("\nThe area of the circle is %.2lf", area);
    return 0;
}

/*
 OUTPUT:
    Enter the radius of the circle: 5
    The area of the circle is 78.50
*/