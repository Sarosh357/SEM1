/*
CLASS: Programming in C
SUBJECT CODE: 23BCA1C04
AUTHOR: Sarosh
DESCRIPTION: This code uses union to take data of a car.
*/

#include<stdio.h>
#include<string.h>
 
union car{
    char name[50];
    float cost;
    int carNo;
};

int main() 
{
    union car record1;
    union car record2;
 
    printf("Example of union using car data:\n");
    printf("RECORD ONE\n");
    
    strcpy(record1.name, "Maruti Suzuki");
    printf("Name:\t%s", record1.name);

    record1.carNo = 1231;
    printf("\nNumber:\t%d", record1.carNo);
    
    record1.cost = 19999.23;
    printf("\nCost:\t%.2f", record1.cost);
    return 0;
}
