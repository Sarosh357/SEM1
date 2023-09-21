/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code calculates the simple interest of the principle, time, and rate of interest inputted by the User.
*/

#include <stdio.h>

int main () {
    // Variable declaration.
    float principle, time, rate, interest = 0;
    
    // Takes the value of principle, time, and rate of interest from the User.
    printf("Enter the principle amount: ");
    scanf("%f", &principle);
    printf("\nEnter the rate of interest: ");
    scanf("%f", &rate);
    printf("\nEnter the number of years: ");
    scanf("%f", &time);

    // Checks if the values are zero or -ve. Returns to main function if any value is zero or -ve.
    if(principle<=0||rate<=0||time<=0) {
        printf("\nValues cannot be zero or negative. Please re-input the value.\n");
        return main();
    }
    
    // Calculates the interest.
    interest = (principle*time*rate)/100.0;
    
    // Outputs the result.
    printf("\nThe simple interest is %.2f", interest);
    return 0;
}

/*
 OUTPUT:
 Enter the principle amount: 5000
 Enter the rate of interest: 10
 Enter the number of years: 5 
 The simple interest is 2500.00
 */