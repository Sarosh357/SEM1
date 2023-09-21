/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code checks whether a character is an alphabet, a digit, or a special symbol.
*/

#include <stdio.h>
int main() {
    // Variable declaration.
    char ch;

    // Takes a character from the user.
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Checks what the character is and outputs the result.
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z') {
        printf("\n The character is an alphabet.");
    } 
    else if(ch>='0'&&ch<='9') {
        printf("\n The character is a digit.");
    }
    else {
        printf("\n The character is a special symbol.");
    } 

    return 0;
}

/*
 OUTPUT:
 Enter a character: A

 The character is an alphabet.
*/