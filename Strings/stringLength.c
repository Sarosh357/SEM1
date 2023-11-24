/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the length of a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Variable declaration.
    char str[10];
    int length = 0;
    
    // Takes the string from the user using gets()
    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    // Outputs the length of the string.
    printf("The length of the string is %d", length);
    return 0;
}