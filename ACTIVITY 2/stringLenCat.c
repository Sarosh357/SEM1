/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code finds the length and concatenates two strings without using inbuilt-functions.
*/

#include <stdio.h>

void main() {
    char str1[50], str2[50];
    int i = 0, j = 0, len  = 0;

    printf("Enter two strings: ");
    gets(str1);
    gets(str2);

    for(i = 0; str1[i]!='\0'; i++)
    {
        len++;
    }

    printf("The length of the first string is %d", len);

    while(str1[i]!='\0') 
    {
        i++;
    }
    
    while (str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    
    str1[i]='\0';
    printf("\nThe concatenation of the two strings is %s", str1);
    return 0;

}

