#include "../include/headerA3.h"

void printAll (struct employee * headLL){

    //counter variable
    int counter = 1;
    int comma;

    //temp list created
    a3Emp * temp;

    //sets temp to headLL
    temp = headLL;
    
    //while loop used to run linked list till it ends
    while(temp != NULL){

        //prints employee number, employee id, employees full name and prints number of dependents with the dependents
        printf("Employee # %d\n", counter);
        printf("\tEmployee id: %d\n", temp->empId);
        printf("\tFirst name: %s\n", temp->fname);
        printf("\tLast name: %s\n", temp->lname);
        printf("\tDependants[%d]: ", temp->numDependents);

        //lowers value by 1
        comma = temp->numDependents - 1 ;

        //for loop used to print all of the dependents
        for(int i = 0; i < temp->numDependents; i++){

            //prints every dependent in array
            printf("%s",temp->dependents[i]);

            //prints right amount of commas
            if (i != comma){
                printf(", ");
            }

        }

        printf("\n\n");

        //temp variable set to nextEmployee
        temp = temp->nextEmployee;

        //increment counter
        counter++;

    }

    //gets correct value of employees
    int newCount = counter - 1;

    //prints number of employees
    printf("Currently, there are %d employees", newCount);
    printf("\n\n");


}