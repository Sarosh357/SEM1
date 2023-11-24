/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses creates the file to store the data of an employee.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;

    /* open for writing */
    fptr = fopen("emp.txt", "w");

    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
    printf("Enter the name:\n");
    scanf("%s", name);
    fprintf(fptr, "Name:\t%s\n", name);

    printf("Enter the age:\n");
    scanf("%d", &age);
    fprintf(fptr, "Age:\t%d\n", age);

    printf("Enter the salary:\n");
    scanf("%f", &salary);
    fprintf(fptr, "Salary:\t%.2f\n", salary);

    fclose(fptr);
}

