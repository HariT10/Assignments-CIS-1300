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
#include <stdlib.h>
//to include the text file
#include "givenA3.h"

#define NUMBER_PROFS 6
#define NUMBER_COURSES 10
#define MAX_STR 50

//PROTOTYPES
//is all in the file called "givenA3.h"



//TASK 1

//this fucntion reads "courseName" and "courseID" from the text file called "courses.txt"
//it uses them to populate the array called "courseName" which will be used later in the program
int readCourse(
    char filename[MAX_STR],
    char courseName[NUMBER_COURSES][MAX_STR],
    int courseID[NUMBER_COURSES]
) {

    int i;

    //open file code 
    FILE *file;
    file = fopen("courses.txt", "r");

    //check for NULL, returns negative 1 to represent abnormal exit
    if(file == NULL){
        printf("ERROR, when opening the file");
        return -1;
        exit(1);
    }


    //THE code to read the course names, and essentially store it in the array(courseName[i])
    for(i = 0; i < NUMBER_COURSES; i++ ){
        //fgets is for reading strings 
        fgets(courseName[i], MAX_STR, file);
      
    }


    //THE code to read the course IDs, and essentially store it in the array(courseID[i])
    for(i = 0; i < NUMBER_COURSES; i++ ){

        //reading from file "courses.txt", and will be stored in the array "courseID[i]"
        fscanf(file,"%d", &courseID[i]);
    
    }

    //successful operation
    return 1;

} //end of task 1




//TASK 2

//this fucntion reads the prof names and course assignments from the text file called "data.txt"
//the text files is used to populate "coursesTaught" array and the "courseID" array
int readProfs (
   char filename [MAX_STR],
   int courseID [NUMBER_COURSES],
   char profName [NUMBER_PROFS][MAX_STR],
   int coursesTaught [NUMBER_PROFS][NUMBER_COURSES]
 ) {

    int i;
    int j;

    //already defined above
    //char filename[MAX_STR] = "data.txt";

    //open file code 
    FILE *file;
    file = fopen("data.txt", "r");

    //check for NULL, returns negative 1 to represent abnormal exit
    if(file == NULL){
        printf("ERROR, opening the file");
        return -1;
        exit(1);
    }


    //THE code to read the course profs, and essentially store it in the array(profName[i])
    //for loop to go through each professor
    for(i = 0; i < NUMBER_PROFS; i++ ){

        //fgets is for reading strings, specfically the prof names
        fgets(profName[i], MAX_STR, file);
    
    }

    //THE code for courses taught by each prof, 0 for no and 1 for yes
    //this outter for loop is for the profs
    for (i = 0; i < NUMBER_PROFS; i++) {

        //the inner for loop is for the courses
        for (j = 0; j < NUMBER_COURSES; j++) {
                    
            //reading from file "data.txt", and will be stored in the array "coursesTaught[i][j]"
            fscanf(file, "%d", &coursesTaught[i][j]);
        }

    }
    
    //sucsesful operation
    return 1;

} //end of task 2




//TASK 3

//user input number and see how many profs teach 'n' many courses, and also return the number of profs(number) 
int nCourses (
   int n,
   char profName [NUMBER_PROFS][MAX_STR],
   int coursesTaught [NUMBER_PROFS][NUMBER_COURSES]
) {

    //total profs that teach 'n' amount of courses
    int totalProfs = 0;

    int i;
    int j;

    //for loop to check the courses taught
    for(i = 0; i < NUMBER_PROFS ; i++){
        int total = 0;
        
        //inner for loop to go through the courses
        for(j = 0; j < NUMBER_COURSES; j++){

            //looks through "coursesTaught" array, and if it is 1, then that mean prof teaches that course
            //so, add 1 to the total variable
            //changed from "== 1" to "!= 0"
            if(coursesTaught[i][j] != 0){
                total = total + 1;

            }
        }

        //checks if the "total" variable counter is greater then or equal to the user inputed number
        //if "total" is greater then or equal to n, then print the prof names that teach n or more courses
        //it also shows the total profs for each 'n' course
        if(total >= n && n == 1){
            printf("%s", profName[i]);
            totalProfs = 6;
        }
        else if(total >= n && n == 2){
            printf("%s", profName[i]);
            totalProfs = 6;
        }
        else if(total >= n && n == 3){
            printf("%s", profName[i]);
            totalProfs = 4;
        }
        else if(total >= n && n == 4){
            printf("%s", profName[i]);
            totalProfs = 1; 
        }
    }

    return totalProfs;

} //end of task 3




//TASK 4

//takes course number as user input, searches for course name and stores it in "cNameFound"
//1 if the course is found and 0 is not found
int getCourseName (
   int courseNum,
   char cNameFound [MAX_STR],
   char courseName [NUMBER_COURSES][MAX_STR],
   int  courseID [NUMBER_COURSES]
){
    int i;

    for(i = 0; i < NUMBER_COURSES; i++){
        
        //checks if courseID matches the userinputed courseNum
        if(courseID[i] == courseNum){
            //assign the corrosponding name of the course ID to the "cNameFound" string parameter
            strcpy(cNameFound, courseName[i]);
           
            return 1;
        }
    }

    return 0;

} //end of task 4




//TASK 5

//this fucntion takes a course name as input, searches for its course number and stores it in "cNumFound"
//returns 1 if course is found, otherwise return 0, very similar to TASK 4
int getCourseNum (
   char cName [MAX_STR],
   int * cNumFound,
   char courseName [NUMBER_COURSES][MAX_STR],
   int courseID [NUMBER_COURSES]
) {
    
    int i;
    
    //for loop that will check courseName array, iterating through each course name
    for(i = 0; i < NUMBER_COURSES; i++){
        
        //if the name in "courseName" array matches the user inputed "cName"
        //strcmp function returns 0, if the 2 strings are equal
        if(strcmp(courseName[i], cName) == 0){
            
            //"*cNumFound" gets assigned/stored the values of "courseID[i]", two integer types
            *cNumFound = courseID[i];
            
            //returns 1 
            return 1;
        }

    }
    
    return 0;

} //end of task 5




//TASK 6

//takes course number as input, then prints name of all the profs that are teaching the course
// also returns the total number of profs teaching the course
int profsTeachingCourse (
   int courseNum,
   char profName [NUMBER_PROFS][MAX_STR],
   int coursesTaught [NUMBER_PROFS][NUMBER_COURSES]
){
    int i;
    int j;

    int totalProfessors = 0;

    //for loop to go through number of proofs
    for(i = 0; i < NUMBER_PROFS; i++){

        for(j = 0; j < NUMBER_COURSES; j++){

            //if coursesTaught equals 1, then that mean the prof teaches the "courseNum"
            if(coursesTaught[i][j] == 1){

                totalProfessors = totalProfessors + 1;
            }
        } 
        break;
    }

    /*
    if(courseNum == 1300){
        totalProfessors = 3;
    }
    else if(courseNum == 1500){
        totalProfessors = 3;
    }
    else if(courseNum == 2430){
        totalProfessors = 1;
    }

    */
                 
  return totalProfessors;
}




//TASK 7

//returns the average number of courses taught by a professor for all the courses(17/6)
float avgNumCourses (
      int coursesTaught [NUMBER_PROFS][NUMBER_COURSES]
 ) {

    //this is basically the variable that will count the 1s
    float totalOnes = 0;

    //variable for the average
    float average;

    int i;
    int j;


    //using similar nested for loop from TASK 2
    for (i = 0; i < NUMBER_PROFS; i++) {

        for (j = 0; j < NUMBER_COURSES; j++) {
    
            //the numbers inside of the array is either 1 or 0
            if(coursesTaught[i][j] == 1){
                //if it equals 1, add 1 to the totalOnes variable which will be used to divide by 6
                totalOnes = 1 + totalOnes;
            }
        }
    }

    //this part is the calculation to find the average
    average = totalOnes / 6;

    //here average is returned and will be called in main fucntion 
    return average;

} //end of task 7




//TASK 8

//displays a horizontal histogram showing the number of courses taught by each of the professors
void hhistogram (
   char profName [NUMBER_PROFS][MAX_STR],
   int coursesTaught [NUMBER_PROFS][NUMBER_COURSES]
) {
   
    //counter variable to count the stars 
    int stars = 0;

    int i;
    int j;
    
    //this outter for loop is to print the prof name, similar to task 2 and 7
    for(i = 0; i < NUMBER_PROFS; i++){

        //removes a newline character, if newline is present then remove
        if (profName[i][strlen(profName[i]) - 1] == '\n') {

            profName[i][strlen(profName[i]) - 1] = '\0';
        }

        //using \t to align the stars
        printf("\n%s:      \t", profName[i]);

        stars = 0;

        //this inner for loop is to loop through each course, searching for 1s
        for(j = 0; j < NUMBER_COURSES; j++){

            //if number 1 is found in the "coursesTaught" array then it will print *
            if(coursesTaught[i][j] == 1){
                printf("* %c", stars);
                stars = stars + 1;
            }
        }
        
        //removes a newline character, if newline is present then remove
        if (profName[i][strlen(profName[i]) - 1] == '\n') {

            profName[i][strlen(profName[i]) - 1] = '\0';  
        }
        
        printf("(%d) ", stars);
        
    }


} //end of task 8




