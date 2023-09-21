/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code calculates the discount (20%) for the amount inputted by the User and outputs the discounted amount. 
*/

#include <stdio.h>

int main () {
    // Variable declaration.
    float amount, discountAmount = 0, finalAmount = 0;
    
    // User inputs the amount whose discount is to be calculated.
    printf("Enter the amount: ");
    scanf("%f", &amount);

    // Checks if the amount entered is greater than zero. Returns to main function if the amount is zero or -ve.
    if(amount<=0) {
        printf("\nAmount cannot be zero or negative. Please re-input the amount.\n");
        return main();
    }
    
    // Calculates the discount and the discounted amount.
    discountAmount = (amount/100) * 20;
    finalAmount = amount - discountAmount;
    //OR you can do this:
    finalAmount = amount*0.8;
    
    // Outputs the result.
    printf("\nThe discounted (discount = %.2f) amount is %.2f", discountAmount, finalAmount);
    return 0;
}

/*
 OUTPUT:
 Enter the amount: 500
 The discounted (discount = 100.00) amount is 400.00
*/