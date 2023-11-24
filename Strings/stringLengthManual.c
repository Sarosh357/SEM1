/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the length of a string without using the inbuilt function.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int i, length = 0;

    printf("Enter the string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("The length of the string is %d", length);

    return 0;
}