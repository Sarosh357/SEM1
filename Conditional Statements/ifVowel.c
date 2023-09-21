/*
Class: Programming in C
Subject Code: 23BCA1C04
Name: Sarosh
Description: This program checks whether the inputted character from the user is a vowel or not 
*/

#include <stdio.h>
#include <ctype.h>

int main () {
    // Variable declaration.
    char ch;

    // user is asked to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // the inputted character is converted to lowercase
    ch = tolower(ch);

    // checks whether the character is a vowel or not
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
        printf("\nThe character is a vowel.");
    } else {
        printf("\nThe character is not a vowel.");
    }

    return 0;
}

/*
 OUTPUT:
 Enter a character: a

 The character is a vowel.
*/