#include "../include/headerA3.h"

int lookOnId (struct employee * headLL, int whichEmpId){

    //creates temp variable
    a3Emp * temp;

    //sets temp to headLL
    if (headLL && headLL->dependents == 0){
        temp = (headLL)->nextEmployee;
    }
        
    else{
        temp = headLL;
    }
    

    //variables declared for position and errorMessage
    int errorMessage = -1;
    int pos = 1;
   
    //runs till end of linked list
    while (temp != NULL) {
        //if ids match
        if (temp->empId == whichEmpId) {
            //decrements position
            pos--;
            //returns position
            return pos + 1;
        }

        //points to next node
        temp = temp->nextEmployee;
        //increments position
        pos++;
    }

    //returns errorMessage which holds -1 value and will let main know wrong id has been entered
    return errorMessage; 
}