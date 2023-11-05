#include "../include/headerA3.h"

void fireAll (a3Emp ** headLL){

    //tempV1 variable created
    a3Emp *tempV1;
    
    //tempV1 set to headLL
    tempV1 = *headLL;
    
    //tempV2 created
    a3Emp *tempV2;

    //runs through the whole tempV1 linked list
    while (tempV1 != NULL) {

        //deletes nodes of linked lists
        tempV2 = tempV1->nextEmployee;
        //free tempV1
        free(tempV1);
        //sets tempV1 to tempV2
        tempV1 = tempV2;

    }

    //sets headLL to NULL
    *headLL = NULL;
}
