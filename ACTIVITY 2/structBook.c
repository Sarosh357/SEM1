/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses structure to take data of a book in an array form.
*/

#include <stdio.h>
#include <string.h>

struct book{
    int bookNumber;
    char name[50];
};

int main() {
    struct book b[5];
    int num, i;

    printf("Enter the number of books to be saved: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) 
    {
        printf("Enter the number of the book: ");
        scanf("%d", &b[i].bookNumber);

        printf("Enter the name of the book: ");
        scanf("%s", &b[i].name);

    }

    for(i = 1; i <= num; i++)
    {
        printf("\nName of the book: %s \t Number of the book: %d", b[i].name, b[i].bookNumber);
    }
    
    return 0;
}   