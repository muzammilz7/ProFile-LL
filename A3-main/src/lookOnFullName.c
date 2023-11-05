#include "../include/headerA3.h"

int lookOnFullName (struct employee * headLL, char whichName [100]){

    //position variable created
    int pos = 1;
    //temp variable created
    a3Emp *temp;

    //sets temp to headLL
    temp = headLL;
    
    //first and last name strings created
    char fname[MAX_LENGTH];
    char lname[MAX_LENGTH];

    //scans first and last name
    sscanf(whichName, "%s %s", fname, lname);

    //puts first letter of first and last names to capital
    fname[0] = toupper(fname[0]);    
    lname[0] = toupper(lname[0]);
    
    //runs till end of linked list
    while (temp != NULL) {
      
        //switches to upper case
        temp->fname[0] = toupper(temp->fname[0]);
        temp->lname[0] = toupper(temp->lname[0]);

        //compares both strings by using strcmp and the first and last names
        if (strcmp(temp->fname, fname) == 0 && strcmp(temp->lname, lname) == 0) {
            //returns position variable to main
            return pos;
        }

        //sets temp to next node in the linked list
        temp = temp->nextEmployee;

        //increments pos
        pos++;
    }

    //returns -1 to let user know that they entered wrong employee name
    return -1;

}    

