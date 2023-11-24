/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code adds two integers using pass by reference (pointer) method.
*/

#include <stdio.h>

int add(int *, int *);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The addition of %d and %d is %d", a, b, add(&a, &b));
    
    return 0;
}

int add(int *x, int *y) {
    
    return *x + *y;
}