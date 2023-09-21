/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code calculates the gross salary of an employee by considering TA = 12%, DA = 10%, HRA = 15%
*/

#include <stdio.h>

int main () {
    // Variable declaration.
    float baseSalary, TA = 0, DA = 0, HRA = 0, grossSalary = 0;
    
    // Taking the base salary from the User.
    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);

    // Checks if the base salary is +ve. Returns to main function if the value is zero or -ve.
    if(baseSalary<=0) {
        printf("\nThe base salary cannot be zero or negative. Please re-input the value.\n");
        return main();
    }
    
    // Calculating the TA, DA, and HRA, then adding them together to get the gross salary.
    TA = baseSalary*0.12;
    DA = baseSalary*0.10;
    HRA = baseSalary*0.15;
    grossSalary = baseSalary + TA + DA + HRA;
    
    // Outputs the result.
    printf("\nThe Gross salary of the provided base salary is %.2f", grossSalary);
    return 0;
}

/*
 OUTPUT:
 Enter the base salary: 25000
 The Gross salary of the provided base salary is 34250.00
 */