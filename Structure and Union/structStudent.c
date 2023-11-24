/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses structure to take data of a student.
*/

#include <stdio.h>

struct student {
    int number;
    char name[50];
    float CGPA;
}s;

int main() {

    printf("Enter the name of the student: ");
    gets(s.name);

    printf("Enter the register number of the student: ");
    scanf("%d", &s.number);

    printf("Enter the CGPA of the student: ");
    scanf("%f", &s.CGPA);

    printf("\nName of the student: %s\nNumber of the student: %d\nCGPA of the student: %.2f", s.name, s.number, s.CGPA);
    return 0;
}