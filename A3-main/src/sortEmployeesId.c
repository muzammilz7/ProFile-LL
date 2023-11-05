#include "../include/headerA3.h"

void sortEmployeesId(struct employee *headLL) {

    // Check if the linked list is NULL
    if (headLL == NULL) {
        return;
    }

    //int variables declared
    int tempDependents;
    int empId;

    //temp linked lists declared
    a3Emp * tempV1;
    a3Emp * tempV2;
    a3Emp * tempV3;

    //created two strings
    char firstName[MAX_LENGTH];
    char lastName[MAX_LENGTH];
    //created double char pointer
    char **dependents;

    //nested for loop
    for (tempV1 = headLL; tempV1->nextEmployee != NULL; tempV1 = tempV1->nextEmployee) {

        tempV3 = tempV1;

        for (tempV2 = tempV1->nextEmployee; tempV2 != NULL; tempV2 = tempV2->nextEmployee) {

            if (tempV2->empId < tempV3->empId) {
                tempV3 = tempV2;
            }
        }

        if (tempV3 != tempV1) {

            //sort employee Ids
            empId = tempV1->empId;
            tempV1->empId = tempV3->empId;
            tempV3->empId = empId;

            //sort number of dependents
            tempDependents = tempV1->numDependents;
            tempV1->numDependents = tempV3->numDependents;
            tempV3->numDependents = tempDependents;

            //sort dependents value
            dependents = tempV1->dependents;
            tempV1->dependents = tempV3->dependents;
            tempV3->dependents = dependents;

             //sort first name of employee
            strcpy(firstName, tempV1->fname);
            strcpy(tempV1->fname, tempV3->fname);
            strcpy(tempV3->fname, firstName);

            //sort last name of employee
            strcpy(lastName, tempV1->lname);
            strcpy(tempV1->lname, tempV3->lname);
            strcpy(tempV3->lname, lastName);

        }
    }

    //prints all employees after they have been sorted
    printAll(headLL);
}