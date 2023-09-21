/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code welcomes a student (user) based on the course and entry ID entered.
*/

#include <stdio.h> 
int main () {
    // Variable declaration.
    int course, entry;

    // Takes the course/stream ID from the user.
    printf("Enter the stream (SCIENCE 1 | COMMERCE 2)\n");
    scanf("%d", &course);

    // Returns back to main function if the course ID is invalid. 
    if (course!=1&&course!=2) {
        printf("Wrong stream ID inputted. Please re-input.\n");
        return main();
    }

    // Takes the entry ID from the user.
    printf("Enter 3 for NORMAL ENTRY and 4 for LATERAL ENTRY\n");
    scanf("%d", &entry);

    // Outputs a welcome message based on the course and entry ID.
    if(course==1) {
            if(entry==3) {
            printf("Welcome to the School of CS and IT NORMAL ENTRY!");
        }   
            else if(entry==4) {
            printf("Welcome to the school of CS and IT LATERAL ENTRY!");
        }   
            else {
            printf("Wrong entry ID chosen.");
        }

    } else { 
            if(entry==3) {
            printf("Welcome to the School of Commerce NORMAL ENTRY!");
        }   
            else if(entry==4) {
            printf("Welcome to the school of Commerce LATERAL ENTRY!");
        }   
            else {
            printf("Wrong entry ID chosen.");
        }
    }

    return 0;
}

/*
 OUTPUT:
 Enter the stream (SCIENCE 1 | COMMERCE 2) 
 1
 Enter 3 for NORMAL ENTRY and 4 for LATERAL ENTRY 
 3
 Welcome to the School of CS and IT NORMAL ENTRY!
*/