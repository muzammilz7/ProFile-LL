#include "../include/headerA3.h"

void fireOne (a3Emp ** headLL, int whichOne){

    //temp variable created
    a3Emp **temp;

    //assign temp value to headLL
    temp = &(*headLL);

    //finds temp in which employee gets fired
    for (int i = 0; i < whichOne - 1; i++) {
        //error trap
        if (*temp == NULL) {
            printf("Error.\n");
            return;
        }
        //sets temp to new position
        temp = &(*temp)->nextEmployee;
    }

    //returns error if temp is NULL
    if (*temp == NULL) {
        printf("Error.\n");
        return;
    }

    //creates prevtemp linked list
    a3Emp *prevEmp = *temp;

    //assigns values to linked list
    if (*temp == *headLL) {
        *headLL = (*temp)->nextEmployee;
    } 
    
    //sets temp to next node
    else {
        *temp = (*temp)->nextEmployee;
    }

    //prints id of employee that has been fired
    printf("Employee [Id: %d] fired.\n", prevEmp->empId);

    //frees
    free(prevEmp);
    //sets list to NULL
    prevEmp = NULL;

}



 