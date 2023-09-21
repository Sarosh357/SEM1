/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code illustrates the usage of pre and post increment operator on a variable.
*/

#include <stdio.h>

int main () {
    // Variable declaration.
    int a = 10;
    
    // Post increment operator acting on variable a. 
    a++;
    
    // Outputs the result.
    printf("a after a++ is %d", a);
    return 0;

    /*
    //Pre Increment operator
    #include <stdio.h>
    
    int main () {
        int a = 10;
        
        printf("a = %d", ++a);
        //               ^^^ Pre increment operator.
        return 0;
    }*/
}