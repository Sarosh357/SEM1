/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code illustrates the usage of pre and post decrement operator on a variable.
*/
#include <stdio.h>

int main () {
    // Variable declaration.
    int a = 10;
    
    // Post decrement operator acting on variable a.
    a--;
    
    // Outputting the result.
    printf("a after a-- is %d", a);
    return 0;

    /*
    //Pre Decrement operator
    #include <stdio.h>
    
    int main () {
        int a = 10;
        
        printf("a after --a is %d", --a);
        //                          ^^^ Pre decrement operator.
        return 0;
    }*/
}
