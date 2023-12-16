/************************ThilakanathanHarishanA1.c**************
Student Name: Harishan Thilakanathan Email Id: hthilaka
Due Date: October 6th Course Name: CIS 1300
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
1) I have read and understood the University policy on academic integrity.
2) I have completed the Computing with Integrity Tutorial on Moodle; and
3) I have achieved at least 80% in the Computing with Integrity Self Test.
I assert that this work is my own. I have appropriately acknowledged any and all
material that I have used, whether directly quoted or paraphrased. Furthermore,
I certify that this assignment was prepared by me specifically for this course.
********************************************************/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


int main(){

    //variable for birth year 
    int birth = 0;
    //variable for remainder when adding the sum of brith year
    int remainder;
    //the sum for birth year 
    int sum = 0;

    //variable for questions 
    char question1;
    char question2;
    char question3;
    char question4;
    char question5;
    char question6;
    char question7;

    
    //varaible for the lifeLine 50/50 option
    char lifeLine;

    //variable for when the lifeline is used, if lifeLine is used then counter will turn to '1' and it will not be used again 
    int lifeLineUsed = 0;

    //for random number
    int randNum;

    // variable to store the selected option as a string
    char* randomGreeting;


    //infinite while loop
    while(1){

        printf("Please enter your year of birth(e.g.,2005): ");
        scanf("%d", &birth);


        // if statement to check if the user entered a four digit number, which represents the year
        if(birth >= 1000 && birth <=9999){
            break;
        } else{
            printf("WRONG. Please try again");
        }

    } //end infinite while loop
    


    //while loop to process each digit one by one, if a digit is 0 it skips 
    while(birth>0){

        //remainder to pull the last digit of the given number 
        remainder = birth % 10;

        //adds the remaidner to the sum each time 
        sum = remainder + sum;
        
        birth = birth / 10;

    } //end while loop


    //for random number
    srand (time(NULL));
    randNum = (rand() % 5) + 1;


    // switch statement with all the different greetings
    switch (randNum) {
        case 1:
            randomGreeting = "Bravo";
            break;
        case 2:
            randomGreeting = "Congrats";
            break;
        case 3:
            randomGreeting = "Well done";
            break;
        case 4:
            randomGreeting = "Very Nice";
            break;
        case 5:
            randomGreeting = "Proud of you";
            break;
        default:
            randomGreeting = "Invalid option";
            break;

    } //end switch statement
    

    //the lucky number and title of the game
    printf("\n");
    printf("*********************************\n");

    printf("Welcome to Mixed Treasures\n");
    printf("Your lucky number is %d \n", sum);

    printf("*********************************\n");
    printf("\n");



    // QUESTION 1
    printf("Question 1: Here is the $100 question \n");
    printf("\n");
    printf("What is the University of Guelph's Mascot \n");
    printf("A. Dragon \n");
    printf("B. Centaur \n");
    printf("C. Aggie \n");
    printf("D. Gryphon \n");


    //infinite while loop to check if correct letter was entered
    while(1){

        //asking if you want to use lifeline or not
        printf("\n");
        printf("Would you like to use a lifeline (50-50)?\n");
        printf("Enter 'Y' or 'y' for YES OR 'N' or 'n' for NO:  \n");
        scanf(" %c" , &lifeLine);


        // if statement to check if either 'Y', 'y', 'N' , 'n' was entered if not please try again 
        if(lifeLine == 'Y' || lifeLine == 'y' || lifeLine == 'n' || lifeLine == 'N'){
            break;
        } 
        else{
            printf("\n");
            printf("Invalid option entered");
            printf("\n");
        }

    } //end infinite while loop


    // the process for when user selects either YES
    if(lifeLine == 'Y' || lifeLine == 'y'){

        lifeLineUsed = 1;
        
        printf("OK - here are your 2 choices after using the 50-50 lifeline\n");
        printf("\n");
        printf("A. Dragon \n");
        printf("D. Gryphon \n");
        printf("\n");
        printf("Reminder - You get only 1 lifeline - and you are using it now \n");


        //infitne while loop to check if A, D was entered
        while(1){

            printf("Enter your FINAL ANSWER (A, D) here: \n");
            scanf(" %c" , &question1);

            if(question1 == 'D' || question1 == 'A' ){
                break;
            } else{
                printf("WRONG. Please try again \n");
            }
        }

    } //end if statement


    //the procces for when user selects NO
    else if(lifeLine == 'N' || lifeLine == 'n'){

        //infitne while loop to check if A,B,C,D
        while(1){

            printf("Enter your FINAL ANSWER (A, B, C, D) here: \n");
            scanf(" %c" , &question1);


            if(question1 == 'A' || question1 == 'B' || question1 == 'C' || question1 == 'D' ){
                break;
            } else{
                printf("WRONG. Please try again. \n");
            }
        }

    } //end else if


    // the proccesing part of QUESTION 1
    if( question1 == 'D'){
        printf("  \n");
        printf("%s!,you just won $100 \n", randomGreeting);
        printf("Let us play the next question now! \n");
        printf("  \n");
    } 
    else{
        printf("WRONG! You won zero dollars, but it was fun playing with you. \n");
        exit(0);
    }



    // QUESTION 2
    printf("  \n");
    printf("Question 2: Here is the $500 question\n");
    printf("  \n");
    printf("What is the name of the cannon that is painted by students? \n");
    printf("A. Old Jeremiah \n");
    printf("B. Painty McPaintFace \n");
    printf("C. George III \n");
    printf("D. Duke of Wellington \n");


    //if lifeLine has been used previosly than enter the if statement
    if(lifeLineUsed == 1){

        //infitne while loop to check if A,B,C,D
        while(1){

            printf("Enter answer (A, B, C, D): \n");
            scanf(" %c" , &question2);
            
            // if statement to check if the user entered a four digit number, which represents the year
            if(question2 == 'A' || question2 == 'B' || question2 == 'C' || question2 == 'D' ){
                break;
            } else{
                printf("WRONG. Please try again. \n");
            }
        }

    } // end if statement
    
    
    //if the lifeLine was not used 
    if(lifeLineUsed != 1){
        
        //infitne while loop to check if correct letter was entered
        while(1){
            
            //asking if you want lifeline or not
            printf("\n");
            printf("Would you like to use a lifeline (50-50)?\n");
            printf("Enter 'Y' or 'y' for YES OR 'N' or 'n' for NO:  \n");
            scanf(" %c" , &lifeLine);
            
            // if statement to check if either 'Y', 'y', 'N' , 'n' was entered if not please try again 
            if(lifeLine == 'Y' || lifeLine == 'y' || lifeLine == 'n' || lifeLine == 'N'){
                break;
            } 
            else{
                printf("WRONG. Please try again. \n");
            }

        } //end of infinite while loop
            

        // the process for when user selects YES
        if(lifeLine == 'Y' || lifeLine == 'y'){

            lifeLineUsed = 1;
            printf("OK - here are your 2 choices after using the 50-50 lifeline\n");
            printf("\n");
            printf("A. Old Jermiah \n");
            printf("C. George III \n");
            printf("\n");
            printf("Reminder - You get only 1 lifeline - and you are using it now \n");

            //infitne while loop to check if A, C was entered
            while(1){

                printf("Enter your FINAL ANSWER (A, C): \n");
                scanf(" %c" , &question2);

                if(question2 == 'A' || question2 == 'C' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }
            
        }

        //the process for when user selects NO
        else if (lifeLine == 'N' || lifeLine == 'n'){
           
            //infitne while loop to check if A,B,C,D
            while(1){
                
                printf("Enter your FINAL ANSWER (A, B, C, D) here: \n");
                scanf(" %c" , &question2);
                

                if(question2 == 'A' || question2 == 'B' || question2 == 'C' || question2 == 'D' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }
        }

    } // end of if statement


    // the proccesing part of QUESTION 2
    if(question2 == 'A'){
        printf("\n");
        printf("Correct! You just won $500 \n");
        printf("Let us play the next question now! \n");
    } 
    else{
        printf("WRONG! You still won $100 dollars. \n");
        printf("It was fun playing with you. \n");
        exit(0);
    }



    //QUESTION 3
    printf("  \n");
    printf("Question 3: Here is the $1000 question\n");
    printf("  \n");
    printf("Who was the School of Computer Science building at UoG named after? \n");
    printf("A. Joseph Reynolds \n");
    printf("B. Ryan Reynolds \n");
    printf("C. Joshua Reynolds \n");
    printf("D. Greg Klotz \n");


    //if lifeLine has been used previosly than enter the if statement
    if(lifeLineUsed == 1){

        //infitne while loop to check if A,B,C,D was entered
        while(1){

            printf("Enter answer (A, B, C, D): \n");
            scanf(" %c" , &question3);
            

            if(question3 == 'A' || question3 == 'B' || question3 == 'C' || question3 == 'D' ){
                break;
            } else{
                printf("WRONG. Please try again. \n");
            }
        }

    } // end if statement


    //if the lifeLine was not used 
    if(lifeLineUsed != 1){
        
        //infitne while loop to check if correct letter was entered
        while(1){
            
            //asking if you want lifeline or not
            printf("\n");
            printf("Would you like to use a lifeline (50-50)?\n");
            printf("Enter 'Y' or 'y' for YES OR 'N' or 'n' for NO:  \n");
            scanf(" %c" , &lifeLine);
            
            // if statement to check if either 'Y', 'y', 'N' , 'n' was entered if not please try again 
            if(lifeLine == 'Y' || lifeLine == 'y' || lifeLine == 'n' || lifeLine == 'N'){
                break;
            } 
            else{
                printf("WRONG. Please try again. \n");
            }

        } //end of infinite while loop

            
        if(lifeLine == 'Y' || lifeLine == 'y'){
            
            lifeLineUsed = 1;
            printf("OK - here are your 2 choices after using the 50-50 lifeline\n");
            printf("\n");
            printf("A. Joseph Reynolds \n");
            printf("B. Ryan Reynolds \n");
            printf("\n");
            printf("Reminder - You get only 1 lifeline - and you are using it now \n");

            //infitne while loop to check if A,B,C,D entered
            while(1){

                printf("Enter your FINAL ANSWER (A, B): \n");
                scanf(" %c" , &question3);


                if(question3 == 'A' || question3 == 'B' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }
    
        }

        else if(lifeLine == 'N' || lifeLine == 'n'){
        

            //infitne while loop to check if A,B,C,D entered
            while(1){
                
                printf("Enter your FINAL ANSWER (A, B, C, D) here: \n");
                scanf(" %c" , &question3);
                

                if(question3 == 'A' || question3 == 'B' || question3 == 'C' || question3 == 'D' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }
        
        }

    } // end of if statement



    // the proccesing part of QUESTION 3 
    if(question3 == 'A'){
        printf("\n");
        printf("Correct! You just won $1000 \n");
        printf("Let us play the next question now! \n");

    } else{
        printf("WRONG! You still won $500 dollars. \n");
        printf("It was fun playing with you. \n");
        exit(0);
    }




    //QUESTION 4
    printf("  \n");
    printf("Question 4: Here is the $5000 question\n");
    printf("  \n");
    printf("How many brains does an octopus have?\n");
    printf("A. 9 \n");
    printf("B. 2 \n");
    printf("C. 1 \n");
    printf("D. 16 \n");


    //if lifeLine has been used previosly than enter the if statement
    if(lifeLineUsed == 1){

        //infitne while loop to check if A,B,C,D
        while(1){

            printf("Enter answer (A, B, C, D): \n");
            scanf(" %c" , &question4);
       

            if(question4 == 'A' || question4 == 'B' || question4 == 'C' || question4 == 'D' ){
                break;
            } else{
                printf("WRONG. Please try again. \n");
            }
        }

    } // end if statement


    //if the lifeLine was not used 
    if(lifeLineUsed !=1){
        
        //infitne while loop to check if correct letter was entered
        while(1){
            
            //asking if you want lifeline or not
            printf("\n");
            printf("Would you like to use a lifeline (50-50)?\n");
            printf("Enter 'Y' or 'y' for YES OR 'N' or 'n' for NO:  \n");
            scanf(" %c" , &lifeLine);
            
            // if statement to check if either 'Y', 'y', 'N' , 'n' was entered if not please try again 
            if(lifeLine == 'Y' || lifeLine == 'y' || lifeLine == 'n' || lifeLine == 'N'){
                break;
            } 
            else{
                printf("WRONG. Please try again. \n");
            }

        } //end of infinite while loop
            

        // the process for when user selects either yes or no
        if(lifeLine == 'Y' || lifeLine == 'y'){
            
            lifeLineUsed = 1;
            printf("OK - here are your 2 choices after using the 50-50 lifeline\n");
            printf("\n");
            printf("A. 9 \n");
            printf("D. 16 \n");
            printf("\n");
            printf("Reminder - You get only 1 lifeline - and you are using it now \n");

            //infitne while loop to check if A,B,C,D entered
            while(1){

                printf("Enter your FINAL ANSWER (A, D): \n");
                scanf(" %c" , &question4);


                if(question4 == 'A' || question4 == 'D' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }
        
        }


        else if(lifeLine == 'N' || lifeLine == 'n'){

            //infitne while loop to check if A,B,C,D
            while(1){
                
                printf("Enter your FINAL ANSWER (A, B, C, D) here: \n");
                scanf(" %c" , &question4);
                
                if(question4 == 'A' || question4 == 'B' || question4 == 'C' || question4 == 'D' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }
        }

    } // end of if statement


    // the proccesing part of QUESTION 4
    if(question4 == 'A'){
        printf("\n");
        printf("Correct! You just won $5000 \n");
        printf("Let us play the next question now! \n");

    } else{
        printf("WRONG! You still won $1000 dollars. \n");
        printf("It was fun playing with you. \n");
        exit(0);
    }




    // QUESTION 5 
    printf("  \n");
    printf("Question 5: Here is the $10,000 question \n");
    printf("  \n");
    printf("How many bones does a shark have?\n");
    printf("A. 42 \n");
    printf("B. 5 \n");
    printf("C. 10 \n");
    printf("D. 0 \n");


    //if lifeLine has been used previosly than enter the if statement
    if(lifeLineUsed == 1){

        //infitne while loop to check if A,B,C,D
        while(1){

            printf("Enter answer (A, B, C, D): \n");
            scanf(" %c" , &question5);
            
            
            if(question5 == 'A' || question5 == 'B' || question5 == 'C' || question5 == 'D' ){
                break;
            } else{
                printf("WRONG. Please try again. \n");
            }
        }

    } // end if statement



    //if the lifeLine was not used 
    if(lifeLineUsed != 1){
        
        //infitne while loop to check if correct letter was entered
        while(1){
            
            //asking if you want lifeline or not
            printf("\n");
            printf("Would you like to use a lifeline (50-50)? \n");
            printf("Enter 'Y' or 'y' for YES OR 'N' or 'n' for NO:  \n");
            scanf(" %c" , &lifeLine);
            
            // if statement to check if either 'Y', 'y', 'N' , 'n' was entered if not please try again 
            if(lifeLine == 'Y' || lifeLine == 'y' || lifeLine == 'n' || lifeLine == 'N'){
                break;
            } 
            else{
                printf("WRONG. Please try again. \n");
            }

        } //end of infinite while loop
            

        // the process for when user selects either yes or no
        if(lifeLine == 'Y' || lifeLine == 'y'){

            lifeLineUsed = 1;
            printf("OK - here are your 2 choices after using the 50-50 lifeline\n");
            printf("\n");
            printf("D. 0 \n");
            printf("B. 5 \n");
            printf("\n");
            printf("Reminder - You get only 1 lifeline - and you are using it now \n");
    
            //infitne while loop to check if A,B,C,D
            while(1){

                printf("Enter your FINAL ANSWER (D, B): \n");
                scanf(" %c" , &question5);

        
                if(question5 == 'D' || question5 == 'B' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }

        }
        
        else if(lifeLine == 'N' || lifeLine == 'n'){
            printf("Enter answer (A, B, C, D): \n");
            scanf(" %c" , &question5);

            //infitne while loop to check if A,B,C,D
            while(1){
                
                printf("Enter your FINAL ANSWER (A, B, C, D) here: \n");
                scanf(" %c" , &question5);
                
                if(question5 == 'A' || question5 == 'B' || question5 == 'C' || question5 == 'D' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }
        }

    } // end of if statement



    // the proccesing part of QUESTION 5
    if(question5 == 'D'){
        printf("\n");
        printf("Correct! You just won $10,000 \n");
        printf("Let us play the next question now! \n");
    } 
    else{
        printf("WRONG! You still won $5000 dollars. \n");
        printf("It was fun playing with you. \n");
        exit(0);
    }



    //QUESTION 6
    printf("  \n");
    printf("Question 6: Here is the question for $50,000 \n");
    printf("  \n");
    printf("What is the largest ocean on Earth? \n");
    printf("A. Pacific \n");
    printf("B. Atlantic \n");
    printf("C. Indian \n");
    printf("D. Artic \n");

    //if lifeLine has been used previosly than enter the if statement
    if(lifeLineUsed == 1){

        //infitne while loop to check if A,B,C,D
        while(1){

            printf("Enter answer (A, B, C, D): \n");
            scanf(" %c" , &question6);
            
            if(question6 == 'A' || question6 == 'B' || question6 == 'C' || question6 == 'D' ){
                break;
            } else{
                printf("WRONG. Please try again. \n");
            }
        }

    } // end if statement


    //if the lifeLine was not used 
    if(lifeLineUsed !=1 ){
        
        //infitne while loop to check if correct letter was entered
        while(1){
            
            //asking if you want lifeline or not
            printf("\n");
            printf("Would you like to use a lifeline (50-50)? \n");
            printf("Enter 'Y' or 'y' for YES OR 'N' or 'n' for NO:  \n");
            scanf(" %c" , &lifeLine);
            
            // if statement to check if either 'Y', 'y', 'N' , 'n' was entered if not please try again 
            if(lifeLine == 'Y' || lifeLine == 'y' || lifeLine == 'n' || lifeLine == 'N'){
                break;
            } 
            else{
                printf("WRONG. Please try again. \n");
            }

        } //end of infinite while loop
            

        // the process for when user selects either yes or no
        if(lifeLine == 'Y' || lifeLine == 'y'){

            lifeLineUsed = 1;
            printf("OK - here are your 2 choices after using the 50-50 lifeline \n");
            printf("\n");
            printf("A. Pacific \n");
            printf("D. Artic \n");
            printf("\n");
            printf("Reminder - You get only 1 lifeline - and you are using it now \n");
    

            //infitne while loop to check if A,B,C,D
            while(1){

                printf("Enter your FINAL ANSWER (A, D): \n");
                scanf(" %c" , &question6);

                if(question6 == 'A' || question6 == 'D' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }
        }
        
        else if(lifeLine == 'N' || lifeLine == 'n'){

            //infitne while loop to check if A,B,C,D
            while(1){
                
                printf("Enter your FINAL ANSWER (A, B, C, D) here: \n");
                scanf(" %c" , &question6);
                
                if(question6 == 'A' || question6 == 'B' || question6 == 'C' || question6 == 'D' ){
                    break;
                } 
                else{
                    printf("WRONG. Please try again. \n");
                }
            }
        }

    } // end of if statement



    // the proccesing part of QUESTION 6
    if(question6 == 'A'){
        printf("\n");
        printf("Correct! You just won $50,000 \n");
        printf("Let us play the next question now! \n");
    } 
    else{
        printf("WRONG! You still won $10,000 dollars. \n");
        printf("It was fun playing with you. \n");
        exit(0);
    }



    //QUESTION 7
    printf("  \n");
    printf("Question 7: Here is the question for $100,000 \n");
    printf("  \n");
    printf("What is the name of the largest fish in the sea?\n");
    printf("A. Blue whale \n");
    printf("B. Great white shark \n");
    printf("C. Hammerhead shark \n");
    printf("D. Whale shark \n");


    //if lifeLine has been used previosly than enter the if statement
    if(lifeLineUsed == 1){

        //infitne while loop to check if A,B,C,D
        while(1){

            printf("Enter answer (A, B, C, D): \n");
            scanf(" %c" , &question7);
            
            if(question7 == 'A' || question7 == 'B' || question7 == 'C' || question7 == 'D' ){
                break;
            } else{
                printf("WRONG. Please try again. \n");
            }
        }

    } // end if statement


    //if the lifeLine was not used 
    if(lifeLineUsed != 1){
        
        //infitne while loop to check if correct letter was entered
        while(1){
            
            //asking if you want lifeline or not
            printf("\n");
            printf("Would you like to use a lifeline (50-50)? \n");
            printf("Enter 'Y' or 'y' for YES OR 'N' or 'n' for NO:  \n");
            scanf(" %c" , &lifeLine);
            
            // if statement to check if either 'Y', 'y', 'N' , 'n' was entered if not please try again 
            if(lifeLine == 'Y' || lifeLine == 'y' || lifeLine == 'n' || lifeLine == 'N'){
                break;
            } 
            else{
                printf("WRONG. Please try again. \n");
            }

        } //end of infinite while loop


        // the process for when user selects either yes or no
        if(lifeLine == 'Y' || lifeLine == 'y'){

            lifeLineUsed = 1;
            printf("OK - here are your 2 choices after using the 50-50 lifeline\n");
            printf("\n");
            printf("A. Blue whale \n");
            printf("D. Whale shark \n");
            printf("\n");
            printf("Reminder - You get only 1 lifeline - and you are using it now \n");

            //infitne while loop to check if A,B,C,D
            while(1){

                printf("Enter your FINAL ANSWER (A, D): \n");
                scanf(" %c" , &question7);


                if(question7 == 'A' || question7 == 'D' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }

        }
        
        else if(lifeLine == 'N' || lifeLine == 'n'){

            //infitne while loop to check if A,B,C,D
            while(1){
                
                printf("Enter your FINAL ANSWER (A, B, C, D) here: \n");
                scanf(" %c" , &question7);
                
                if(question7 == 'A' || question7 == 'B' || question7 == 'C' || question7 == 'D' ){
                    break;
                } else{
                    printf("WRONG. Please try again. \n");
                }
            }
        }
    
    } // end of if statement

    // the proccesing part of QUESTION 7
    if(question7 == 'D'){
        printf("\n");
        printf("Correct! You just won $100,000 \n");
        printf("It was fun playing with you \n");
    } 
    else{
        printf("WRONG! You still won $50,000 dollars. \n");
        printf("It was fun playing with you. \n");
        exit(0);
    }
    
    return 0;
}
