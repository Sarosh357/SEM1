/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses for loop to find whether a number is a prime number or not.
*/

#include <stdio.h>

int main() {
    // Variable declaration.
    int array[10], index, number, isPrime;

    // Takes the number from the user.
    printf("Enter a number: ");
    scanf("%d", &number);

    // Discarding 0 and 1 in the beginning as they aren't prime numbers.
    if(number == 0 || number == 1)
    {
        isPrime = 0;
    }
    else
    {   
        // For loop runs till n - 1 and checks divisibility of the number.  
        for(index = 2; index <= number - 1; index++)
        {

            if(number % index == 0)
            {
                isPrime = 0;
                break;
            }
            else
            {
                isPrime = 1;
            }
        }
    }

    // Outputs the result (if variable isPrime = 1, it is a prime number.)
    if(isPrime == 0)
    {
        printf("\nNot a prime.");
    }
    else
    {
        printf("\nPrime number.");
    }
    
    return 0;
    
}