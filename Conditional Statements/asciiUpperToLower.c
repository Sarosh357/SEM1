/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This program converts an uppercase letter to lowercase using ASCII Code.
*/

#include <stdio.h>
int main() {
    // Variable declaration.
    char ch;

    // Takes an alphabet from the user.
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Adds 32 to the ASCII value of uppercase alphabet.
    ch = ch + 32;

    // Outputs the result.
    printf("\nThe lower case character is %c", ch);
    return 0;
}

/*
 OUTPUT:
 Enter a character: A
 The lower case character is a
 */