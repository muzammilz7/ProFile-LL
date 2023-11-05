#include "../include/headerA3.h"


void recruitEmployee (struct employee ** headLL){

    //using helper function declared variables/pointers
    int sum = 0;
    char var;
    //created linked list
    a3Emp *rec;
    //allocated spacec
    rec = malloc(sizeof(a3Emp));
    //created 2 linked lists and assigned to headLL
    a3Emp *ASCII;
    ASCII = *headLL; 
    a3Emp *temp;
    temp = *headLL;

    //sets nodes to null or 0 
    rec->nextEmployee = NULL;
    rec->numDependents = 0;
    
    //allocates space
    rec->dependents = malloc(sizeof(char *) * MAX_LENGTH);

    //scans first name
    printf("\nEnter the first name of the employee: ");
    scanf("%s", rec->fname);
    //converts all letters to uppercase
    rec->fname[0] = toupper(rec->fname[0]);

    //scans last name
    printf("Enter the last name of the employee: ");
    scanf("%s", rec->lname);
    //converts all lowercase letters to uppercase
    rec->lname[0] = toupper(rec->lname[0]);
    
    //for loop to find and add ascii value of first name
    for (int i = 0; i < strlen(rec->fname); i++){
        //used to find ascii values
        sum += (int)(rec->fname[i]);
    }

    //adds ascii value of last name
    rec->empId = (sum) + (strlen(rec->lname));


    while (tolower(var) != 'n'){
        //checks for var dependants or not
        rec->dependents[rec->numDependents] = malloc(sizeof(char) * MAX_LENGTH);
        printf("\n\nEnter the name of dependent # %d: ", (rec->numDependents) + 1);
        scanf("%s", rec->dependents[rec->numDependents]);
        rec->numDependents++;
        //asks for yes or no
        printf("\nDo you have any more dependents? ");
        scanf(" %c", &var);
    }

    //prints number of dependants
    printf("\n\nYou have %d dependents.\n", rec->numDependents);

    //runs till end of linked list

    while (ASCII != NULL){

        //switches lowercase letters to uppercase
        ASCII->fname[0] = toupper(ASCII->fname[0]);
        ASCII->lname[0] = toupper(ASCII->lname[0]);
        
        //if id is same, it randomly changes value
        if (strcmp(ASCII->fname,rec->fname) == 0 && strlen(ASCII->lname) == strlen(ASCII->lname))
            {
                //assigns random value
                rec->empId += rand() % 999 + 1;
            }
        
        //points to next node
        ASCII = ASCII->nextEmployee;
    }

    //assigns new employee info linked list
    if (!*headLL){

        *headLL = rec;

    }

    else{

        temp = *headLL;

        while (temp->nextEmployee != NULL){

            temp = temp->nextEmployee;

        }
        
        temp->nextEmployee = rec;
    }

    //displays employee id
    printf("\nYour computer-generated employee Id is %d\n\n", rec->empId);

}






