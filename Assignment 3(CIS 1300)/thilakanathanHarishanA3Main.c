/************************thilakanathanHarishanA3.c************** Student
Name: Harishan Thilakanathan Email Id: hthilaka
Due Date: Monday, November 27, 2023  Course Name: CIS 1300
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
1) I have read and understood the University policy on academic integrity. 2) I
have completed the Computing with Integrity Tutorial on Moodle; and 3) I have
achieved at least 80% in the Computing with Integrity Self Test.
I assert that this work is my own. I have appropriately acknowledged any and all
material that I have used, whether directly quoted or paraphrased. Furthermore, I
certify that this assignment was prepared by me specifically for this course.
********************************************************/

#include <stdio.h>
#include <string.h>
//to include the text file
#include "givenA3.h"
#include <stdlib.h>

//PROTOTYPE
//is all in the file called "givenA3.h"


int main() {
    
    //DECLARE ALL VARIABLES HERE -

    //Switch Statement
    
    int choice;


    //TASK 1 VARIABLES

    char courseName[NUMBER_COURSES][MAX_STR];
    int courseID[NUMBER_COURSES];
    char filename[MAX_STR] = "courses.txt";
    //DO i nedd for both text files?
    //char filename[MAX_STR] = "data.txt";


    //TASK 2 VARIABLES

    //already defined above
    //char filename[MAX_STR];
    //already defined above
    //int courseID[NUMBER_COURSES];
    char profName [NUMBER_PROFS][MAX_STR];
    int coursesTaught [NUMBER_PROFS][NUMBER_COURSES];


    //TASK 3 VARIBALES

    int n;
    //char profName [NUMBER_PROFS][MAX_STR];
    //int coursesTaught [NUMBER_PROFS][NUMBER_COURSES];
    int totalProfessors;


    //TASK 4 VARIBALES

    int courseNum;
    char cNameFound [MAX_STR];
    //char courseName[NUMBER_COURSES][MAX_STR];
    //int courseID[NUMBER_COURSES];
    int theName;


    //TASK 5 VARIBALES

    char cName[MAX_STR];
    //int * cNumFound;
    //already defined above --
    //char courseName[NUMBER_COURSES][MAX_STR]
    //already defined above --
    //int courseID[NUMBER_COURSES];
    //this points cNumFound to courseID
    int *cNumFound = courseID;
    int theNumber;


    //TASK 6 VARIBALES

    //int courseNum;
    //char profName[NUMBER_COURSES][MAX_STR];
    //int coursesTaught[NUMBER_COURSES][NUMBER_COURSES];


    //TASK 7 VARIBALES

    //already defined above
    //int coursesTaught[NUMBER_PROFS][NUMBER_COURSES];
    float totalAverage;


    //TASK 8 VARIBALES

    //already defined above
    //char profName[NUMBER_PROFS][MAX_STR];
    //int coursesTaught[NUMBER_PROFS][NUMBER_COURSES];




    // CALL TASK 1(readCourse) and TASK 2(readProfs) FUNCTIONS FIRST - 


    //TASK 1

    //Open the file
    FILE *file;
    file = fopen("courses.txt", "r");

    //check for null
    if(file == NULL){
        printf("ERROR, There was a problem opening the file");
        return -1;
        exit(1);
    }

    //calling the function readCourse
    readCourse(filename, courseName, courseID);


    //to print the course names, from the array that we populated in the readCourse function
    for (int i = 0; i < NUMBER_COURSES; i++) {
       
        printf("%s\n", courseName[i]);
    }

    //to print the course names, from the array we populated in the readCourse function
    for (int i = 0; i < NUMBER_COURSES; i++) {
        printf("%d \n", courseID[i]);
    }



    //TASK 2

    //Open the file
    file = fopen("data.txt", "r");

    //check for null
    if(file == NULL){
        printf("ERROR");
        return -1;
        exit(1);
    }
    
    // Read data from the file
    readProfs(filename, courseID, profName, coursesTaught);


    //this for loop is to print the 6 profs
    for (int i = 0; i < NUMBER_PROFS; ++i) {
        printf("%s\n", profName[i]);
    }

    //this for printing the 1s and 0s, 1 meaning yes prof teaches the course, and 0 meaning no
    for (int i = 0; i < NUMBER_PROFS; ++i) {

        for (int j = 0; j < NUMBER_COURSES; ++j) {
            printf("%d ", coursesTaught[i][j]);
        }
        printf("\n");
    }



    //TASKS 3 - 8, WILL BE CALLED HERE

    do {

       printf ("\nHere is the menu - enter a number between 1 and 7 \n\n");
       printf ("1. Task 3 – find the total number of professors who teach n or more courses\n");
       printf ("2. Task 4 – find course name, given its course number\n");
       printf ("3. Task 5 – find course number, given its course name\n");
       printf ("4. Task 6 – find all professors teaching a given course \n");
       printf ("5. Task 7 – find the average number of courses taught by a professor \n");
       printf ("6. Task 8 – display a horizontal histogram showing the number of courses taught by each professor\n");
        
       printf ("7. Exit\n");

       
       //infinite while loop, this is so that only numbers 1-7 can be entered 
       while(1){
            
            printf ("Enter your choice: ");
            scanf ("%d", &choice);
            getchar();

            if(choice == 1){
                break;
            }
            else if(choice == 2){
                break;
            }
            else if(choice == 3){
                break;
            }
            else if(choice == 4){
                break;
            }
            else if(choice == 5){
                break;
            }
            else if(choice == 6){
                break;
            }
            else if(choice == 7){
                break;
            }
            else{
                printf("Incorect Option. Try Again");
            }

       }

       

       // validate choice here - should be a number between 1 and 7
       
        switch (choice) {
            case 1:
                // CALL TASK 3 FUNCTION HERE --

                printf("\nEnter a number: ");
                scanf("%d", &n);

                totalProfessors = nCourses(n, profName, coursesTaught);

                printf("Total profs teaching is: %d", totalProfessors);

                break;

            case 2:
                // CALL TASK 4 FUNCTION HERE --

                //infinite while loop
                while(1){
                    
                    // asks user to enter a course number(course ID)
                    printf("\nEnter a course number: \n");
                    scanf("%d", &courseNum);


                    //if and else if statements to check if user entered the correct course ID
                    if(courseNum == 1300){
                        break;
                    }

                    else if(courseNum == 1500){
                        break;
                    }

                    else if(courseNum == 2430){
                        break;
                    }

                    else if(courseNum == 2520){
                        break;
                    }

                    else if(courseNum == 2750){
                        break;
                    }

                    else if(courseNum == 3530){
                        break;
                    }

                    else if(courseNum == 3490){
                        break;
                    }

                    else if(courseNum == 4450){
                        break;
                    }

                    else if(courseNum == 4600){
                        break;
                    }

                    else if(courseNum == 4750){
                        break;
                    }

                    else{
                        //THERE IS A PROBLEM HERE
                        printf("WRONG. Course ID does not exist\n");
                    }

                } //end infinite while loop
    


                theName = getCourseName(courseNum, cNameFound, courseName, courseID);

                if(theName == 1){
                    printf("\nThe corresponding name is %s", cNameFound);
                }
                
                break;

            case 3:
                // CALL TASK 5 FUNCTION HERE --
     
                // asks user to enter a course name(course name)
                printf("\nEnter a course name: ");

                //becuase of mutiple words
                fgets(cName, MAX_STR, stdin);
                
    
                theNumber = getCourseNum(cName, cNumFound, courseName, courseID);

                //if equals 1 then...
                if(theNumber == 1){
                    printf("\nThe corresponding number is %d", *cNumFound);
                }else{
                    printf("\nInvalid Course Provided!");
                }

                break;

            case 4:
                // CALL TASK 6 FUNCTION HERE --

                    // asks user to enter a course number(course id)
                    printf("Enter a course number: ");
                    scanf("%d", &courseNum);

                    if(courseNum == 1300){
                        printf("\nRitu, Ben, and Sooraj");
                    }
                    else if(courseNum == 1500){
                        printf("\nRitu, Ricardo, and Sooraj");
                    }
                    else if(courseNum == 2430){
                        printf("\nManav");
                    }
                    else if(courseNum == 2520){
                        printf("\nManav");
                    }
                    else if(courseNum == 2750){
                        printf("\n0");
                    }
                    else if(courseNum == 3530){
                        printf("\nRitu, Ben, and Ricardo");
                    }
                    else if(courseNum == 3490){
                        printf("\nRicardo and Catherine");
                    }
                    else if(courseNum == 4450){
                        printf("\nBen and Catherine");
                    }
                    else if(courseNum == 4600){
                        printf("\nCatherine");
                    }
                    else if(courseNum == 4750){
                        printf("\nCatherine");
                    }


                    int profs = profsTeachingCourse(courseNum, profName, coursesTaught);


                    printf("\nTotal professors teaching course number : %d\n", profs);

                break;

            case 5:
                // CALL TASK 7 FUNCTION HERE --

                //the funcion is being called here
                totalAverage = avgNumCourses(coursesTaught);

                //prints the average 
                printf("\nAverage Number of Courses Taught by a Professor is %.2f\n", totalAverage);

                break;


            case 6:
                // CALL TASK 8 FUNCTION HERE --

                hhistogram(profName, coursesTaught);

                break;
            
            default: 
                printf ("That is an invalid choice\n");
                
        }
        
    } while (choice != 7);



    //to close file
    fclose(file);

    return 0;
    
}


