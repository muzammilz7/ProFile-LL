#include "../include/headerA3.h"

void printOne (struct employee * headLL, int whichOne){
    
    //temp variable created
    a3Emp * temp;
    // temp assigned to headLL
    temp = headLL;

    //variables declared
    int counter = 1;
    int comma;

    //counts employee number
    while (temp != NULL && counter < whichOne){
        temp = temp->nextEmployee;
        counter++;
    }

    //runs till linked list equals NULL

    if (temp != NULL) {

        //prints employee number, id, first and last name
        printf("Employee # %d\n", counter);
        printf("\tEmployee id: %d\n", temp->empId);
        printf("\tFirst name: %s\n", temp->fname);
        printf("\tLast name: %s\n", temp->lname);
        //prints dependents
        printf("\tDependants[%d]: ", temp->numDependents);

        comma = temp->numDependents-1;
        //for loop used to print all of the dependents
        for(int i = 0; i < temp->numDependents; i++){
            //prints each dependent using for loop
            printf("%s",temp->dependents[i]);
            //used to print commas in between each dependent
            if (i != comma){
                printf(", ");
            }  
        }
        printf("\n\n");
    } 
    
}