/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code concatenates two strings and reverses a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Variable declaration.
    char str1[10], str2[20];

    // Takes two strings from the user.
    printf("Enter two strings: ");
    gets(str1);
    gets(str2);
    
    // Reversing the string in the printf statement, then reversing it again to revert it and concatenate. 
    printf("Reverse of the first string is: %s", strrev(str1));
    
    strrev(str1);
    strcat(str1, str2);
    
    // Outputting the concatenated form.
    printf("\nConcatenate of the two strings is ");
    puts(str1);

    return 0;
}