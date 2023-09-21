/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code takes displays the day of the week based on the integer inputted by the user.
*/

#include <stdio.h>
int main() {
    // Variable declaration.
    int day;

    // Takes the integer (day) from the user.
    printf("Enter a number\n\t1 = SUNDAY\t...\t7 = SATURDAY\n");
    scanf("%d", &day);
    
    // Simple if-else-if block for outputting day of the week.
    if(day==1) {
        printf("\nSUNDAY.");
    } 
    else if(day==2) {
        printf("\nMONDAY.");
    } 
    else if(day==3) {
        printf("\nTUESDAY.");
    } 
    else if(day==4) {
        printf("\nWEDNESDAY.");
    } 
    else if(day==5) {
        printf("\nTHURSDAY.");
    } 
    else if(day==6) {
        printf("\nFRIDAY.");
    } 
    else if(day==7) {
        printf("\nSATURDAY.");
    } 
    else {
        printf("\nWRONG INPUT.");
    }

    return 0;
}

/*
 OUTPUT:
 Enter a number 
 1 = SUNDAY     ...      7 = SATURDAY
 5

 THURSDAY.
 */