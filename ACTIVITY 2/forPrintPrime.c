/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses for loop to print prime numbers from 1 - n.
*/

#include <stdio.h>

int prime(int);

int main() {
    int n, i;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("The prime numbers in the given range are\n");

    for(i = 1; i <= n; i++)
    {
        if(prime(i)) {
        printf("%d ", i);
    }
    }
}

int prime(int n) {
    int i;
    if(n==0||n==1){
        return 0;
    }
    for(i = 2; i < n-1; i++)
    {   
        if(n%i==0) {
        return 0;
        }
    }
    return 1;
}