#include "../include/headerA3.h"


int main(int argc, char * argv[]){
 
   
    //malloced space and declared string
    a3Emp ** list = malloc(sizeof(a3Emp *));
    *list = malloc(sizeof(a3Emp) );
    *list = NULL;
    char fileName[MAX_LENGTH] = "proFile.txt"; 
    int userInp,func3Inp, func4Inp, inp, func6, numEmp, func8Inp, newEmpNum;
    // char whichName [100];
    char func9Inp;


    //helper function called
    loadEmpData(list, fileName); 


    do{

            //menu
            printf("1. Add a new employee\n");
            printf("2. Print data of all employees\n");
            printf("3. Print data of the nth employee\n");
            printf("4. Search for employee based on empId\n");
            printf("5. Search for employee based on full name\n");
            printf("6. Count the total number of employees\n");
            printf("7. Sort the employees based on their empId\n");
            printf("8. Remove the nth employee in the current LL\n");
            printf("9. Remove all employees in the current LL\n");
            printf("10. Exit\n");
            printf("\n");
            printf("Choose a menu option: ");
            scanf("%d", &userInp);
        
            //option 1
            if(userInp == 1){
                //function 1 call
                recruitEmployee(list);
            }

            //option 2
            else if(userInp == 2){
                if(*list){
                    //function 2 call
                    printAll((*list));
            }    

            //if list is empty
            else {
                printf("List is empty\n\n");
            } 

            }


            //option 3
            else if(userInp == 3){
                if (*list){
                    printf("\n");
                    //asks for and scans position
                    printf("Enter a position: ");
                    scanf("%d", &func3Inp);
                    //function 3 call
                    printOne(*list, func3Inp);
            }

            //if list is empty
            else{

                printf("List is Empty.\n\n");
               
            }      
            }

            //option 4 
            else if(userInp == 4){
                
                 if (*list){
                    //asks and scans employee id
                    printf("Enter an employee id: ");
                    scanf("%d", &func4Inp);
                    //function 4 call
                    inp = lookOnId(*list, func4Inp);
                    if (inp == -1){
                        printf("Error, wrong Id entered\n\n");
                        
                    }

                    //prints employee
                    printOne(*list, inp);
                
                }

                //if list is empty
                else{
                    printf("List is Empty.\n\n");
                    break;
                }   
            }

            //option 5 
            else if(userInp == 5){
                
            if (*list) {
                //scans employee
                printf("Enter the full name of the employee: ");
                scanf("%*c");   
                //whichName variable
                char whichName[100];
                fgets(whichName, 100, stdin);
                //removes \0
                whichName[strcspn(whichName, "\n")] = '\0'; 
                
                //finds position of employee in the linked list, function 5 call
                int func5Inp = lookOnFullName(*list, whichName);
                
                //error trap if wrong employee name is entered
                if (func5Inp == -1) {
                    printf("That name is not associated with any employees.\n\n");
                } 

                else {
                    //prints employee
                    printOne(*list, func5Inp);
                }

            } 

            else {
                //if list is empty
                printf("The list is empty.\n\n");
            }     

            }

            //option 6 
            else if(userInp == 6){
        
                if (*list){
                    //function 6 call
                    func6 = countEmployees(*list);
                    printf("\nTotal Number of employees: %d\n\n", func6);
                
                }
                //if list is empty
                else{
                    printf("List is Empty.\n\n");
                }  
            }

            //option 7 
            else if(userInp == 7){

                if (*list){
                    //function 7 call
                    sortEmployeesId(*list);
                }

                //if list is empty
                else{
                    printf("List is Empty.\n\n");
                } 

            }

            //option 8 
            else if(userInp == 8){

                if (*list){

                    //counts number of employees, function 6 call
                    numEmp = countEmployees(*list);
                    printf("\n\n");
                    //displays number of employees and scans which employee to fire
                    printf("Currently, there are %d employee(s).\n", numEmp);
                    printf("Which employee do you wish to fire - enter a value between 1 and %d: ", numEmp);
                    scanf("%d", &func8Inp);

                    //error trap
                    if (func8Inp < 1 || func8Inp > numEmp){
                        printf("Error, please enter another value.\n\n");
                    }            

                    //gets correct number of employees 
                    newEmpNum = numEmp - 1 ;

                    //function 8 call
                    fireOne(list, func8Inp);
                    printf("There are now %d employees.\n\n", newEmpNum);
            
                }

                //if list is empty
                else{
                    printf("List is Empty.\n\n");
                }

            }

            //option 9 
            else if(userInp == 9){
            
            //scans user decision
            printf("Are you sure you want to fire everyone: ");
            scanf(" %c", &func9Inp);

            if(func9Inp == 'y' ){

                if (*list){
                    //function 9 call
                    fireAll(list);
                    printf("All fired. Linked list is now empty.");
                }
            
            //if list is empty
            else{

                printf("List is Empty.\n\n");
                
            }
            }

            printf("\n\n");
            

            }
            
        //while condition    
        }while(userInp != 10);
    
}
    


