/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code searches for a prime number in an array.
*/

#include <stdio.h>

int main() {
    // Variable declaration
    int array[10], number, index, prime = 0, arrayElement = 0, count = 0, isPrime = 0;

    // Takes the number of terms and the elements of the array from the user.
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Enter the elements of the array: ");
    for(index = 0; index < number; index++)
    {
        scanf("%d", &array[index]);
    }

    // Checking each element of the array.
    for(index = 0; index < number; index++)
    {
        // Discarding 0 and 1 as they are not prime
        if (array[index] <= 1)
        {
            continue;
        }
        // To simplify the prime loop, checking for numbers 2 and 3 as they are prime numbers.
        else if (array[index] <= 3)
        {
            isPrime = 1;
            
            printf("\n%d is a prime number.", array[index]);
            count++;
            
            continue;
        }
        else
        {
        // For loop runs till n - 1 and checks divisibility of the number.  
            for(prime = 2; prime < array[index] - 1; prime++)
            {
                if (array[index] % prime == 0)
                {
                    isPrime = 0; 
                    break;
                }
                else 
                {   
                    isPrime = 1; 
                    continue;
                }                
            }
            
            if (isPrime == 1)
            {
                printf("\n%d is a prime number.", array[index]);
                count++;
            }
        }
    }

    // Outputs the sum of the elements of the array.
    printf("\nThere are %d prime numbers in the given array", count);
    
    return 0;
}