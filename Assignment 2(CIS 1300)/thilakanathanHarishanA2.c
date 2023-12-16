/* 
Student Name: Harishan Thilakanathan - Email Id: hthilaka
Due Date: November 6th - Course Name: CIS 1300

I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
1) I have read and understood the University policy on academic integrity. 2) I
have completed the Computing with Integrity Tutorial on Moodle; and 3) I have
achieved at least 80% in the Computing with Integrity Self Test.
I assert that this work is my own. I have appropriately acknowledged any and
all material that I have used, whether directly quoted or paraphrased.
Furthermore, I certify that this assignment was prepared by me specifically for
this course.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 100
#define NUMPROTEINS 64


//Function 1
//Function for possible base pairs for Adenine, Guanine, Cytosine, and Thymine
bool isBasePair(char neu1, char neu2){

    //all the possible base pairs 
    if((neu1 == 'A' && neu2 == 'T') || (neu1 == 'G' && neu2 == 'C') || (neu1 == 'T' && neu2 == 'A') || (neu1 == 'C' && neu2 == 'G')){
        return true;
    }
    else{
        return false;
    }
}


//Function 2 
//Checks if the strands form a DNA sequence 
bool isItaDnaSequence(char strand1[SIZE], char strand2[SIZE]){
  
    int length;
    length = strlen(strand1);
    
    //both strands must be of equal length, we have to assume they are

    for(int i = 0; i < length; i++){
        //this is a valid DNA base pair, as seen in fucntion 1, this creates a valid DNA sequence 
        //CT,GA --- 
        //CT
        //GA
        if(isBasePair(strand1[i], strand2[i])){
            return true;
        }
        //this is NOT valid DNA base pair, as seen in fucntion 1, this does not create a valid DNA sequence 
        //CT,TA ---
        //CT
        //TA
        else{
            return false;
        }
    }
    return 0; 
}


//Function 3
//Reverses a strand
void reverse(char aStrand[SIZE]){
    int i;
    int length;
    int firstHalf;
    char letter;

    //this is to get the length of the string, which is needed in order to reverse 
    length = strlen(aStrand);

    //cut the string in half
    firstHalf = length / 2;
    
    for(i = 0; i < firstHalf; i++){

        letter = aStrand[i];
        aStrand[i] = aStrand[length - i -1]; 
        aStrand[length - i -1] = letter;
    }
}


//Function 4 
//Complements a strand
void complementIt(char aStrand[SIZE]){
    int i;
    int length;
    length = strlen(aStrand);
    
    //switch statement inside of a for loop
    for(i = 0; i < length; i++){

        //a switch statement that switches each letter, also known as complementing
        //possible using either switch or if else 
        switch(aStrand[i]){
            case 'A':
                aStrand[i] = 'T';
                break;

            case 'T':
                aStrand[i] = 'A';
                break;

            case 'C':
                aStrand[i] = 'G';
                break;

            case 'G':
                aStrand[i] = 'C';
                break;

            default:
                break;
        }
    }
}


//Function 5
//Checks if given string is a palindrome
bool isItPalindrome(char aStrand[SIZE]){
    int length;
    int i;

    length = strlen(aStrand);

    //checking for empty string, which would automatically be a palindrome
    if(length == 0){
        return true;
    }

    //for loop to iterate through each letter
    for(i = 0; i < length; i++){
        //compares the first element with the last element 
        if(aStrand[0] == aStrand[length - i -1]){
            return true;
        }
        else{
            return false;
        }
    }
    return 0;
}


//Function 6
//Cheks if given string is a DNA palindrome
bool isStrandDnaPalindrome(char aStrand[SIZE]){
    int length;
    int i = 0;

    length = strlen(aStrand);

    //array for the complementary
    char comp[SIZE];

    //for loop to go thorugh each letter in the given DNA sequence 
    //possible using either switch or if else
    for(i = 0; i < length; i++){

        if(aStrand[i] == 'A'){
            comp[i] = 'T';
        }
        else if(aStrand[i] == 'T'){
            comp[i] = 'A';
        } 
        else if(aStrand[i] == 'C'){
            comp[i] = 'G';
        }
        else if(aStrand[i] == 'G'){
            comp[i] = 'C';
        }
    }


    for(i = 0; i < length; i++){
        //this if else statement, checks the first element of the DNA string(aStrand[0])
        //and then it check the last element of the complementary string(comp[length-i-1])
        //if both elements are the same, then it returns true, otherwise returns false
        if(aStrand[i] == comp[length - i - 1]){
            return true;
        }
        else{
            return false;
        }
    }
    return 0;

}


//Function 7 
//Returns total number of neuclotides in strand
int howMany(char aStrand[SIZE], char neu){

    //this is the variable for the total number of neuclotieds(neu)
    int totalNumber = 0;

    int i;
    int length;
   
    length = strlen(aStrand);

    //goes through the strand and scans each letter to see if it is the selected letter
    for(i = 0; i < length; i++){
        //if the letter is the selected letter(neu) then add 1 to the totalNumber variable
        if(aStrand[i] == neu){
            //adds 1 to totalNumber variable
            totalNumber = 1 + totalNumber;

        }
    }
    //return the total number of neuclotiedes in the given strand 
    return totalNumber;
}


//Function 8
//Converts DNA sequence to mRNA sequence
void dnaToMrna(char aSeq[SIZE], char mRNA[SIZE]){
    //int length;
    int i;
    int length;

    length = strlen(aSeq);

    // for loop to go thorugh each letter in the given DNA sequence 
    for(i = 0; i < length; i++){

        if(aSeq[i] == 'C'){
            mRNA[i] = 'G';
        }
        else if(aSeq[i] == 'A'){
            mRNA[i] = 'U';
        } 
        else if(aSeq[i] == 'T'){
            mRNA[i] = 'A';
        }
        else if(aSeq[i] == 'G'){
            mRNA[i] = 'C';
        }
    }
}


//getCode FUNCTION from Courselink
char getCode (char protein [3]) {

    // array allProteins has a list of all 3-triplet amino acids required for this assignment
    char allProteins [NUMPROTEINS][SIZE] = {"GCA", "GCC", "GCG", "GCU", "AGA","AGG", "CGA", "CGC","CGG","CGU","GAC", "GAU","AAC","AAU","UGC","UGU","GAA","GAG","CAA","CAG", "GGA", "GGC","GGG","GGU","CAC", "CAU","AUA","AUC","AUU", "UUA", "UUG","CUA","CUC", "CUG","CUU", "AAA", "AAG","AUG", "UUC","UUU", "CCA", "CCC", "CCG", "CCU", "AGC","AGU","UCA","UCC","UCG", "UCU","ACA","ACC","ACG", "ACU", "UGG","UAC","UAU", "GUA","GUC","GUG", "GUU"};
    
    // array allCodes stores the single-letter code of each triplet given in the above array
    char allCodes [NUMPROTEINS] = {'A','A','A','A','R','R','R','R','R','R','D','D','N','N','C','C','E','E','Q','Q', 'G','G','G','G','H','H','I','I','I', 'L','L','L','L','L','L','K','K','M','F','F','P','P','P','P','S','S','S','S','S','S','T','T','T','T', 'W','Y','Y','V','V','V','V'};
    
    for (int i = 0; i < NUMPROTEINS; i++) {

        if  (strncmp (protein, allProteins[i], 3) == 0){
            return allCodes [i];
        }
    }
    return 'Z';   // to indicate an incorrect code - code that doesn't exist in array allCodes
}


//Function 9
//Takes DNA sequence and prints list of amino-acids that its mRNA equivalent translates to
void translateDnaToMrnaProteins(char aSeq[SIZE]){
    //for for loop
    int i;
    //length variable 
    int length;

    //gets the length of the sequence, hence strlen
    length = strlen(aSeq);

    char mRNA[SIZE];

    //groups of 3
    char aminoAcid[3];

    //variable for the amino acid letter
    char letter;

    // for loop to go thorugh each letter in the given DNA sequence 
    //CONVERT from DNA to mRNA, as used in fucntion 8
    for(i = 0; i < length; i++){

        if(aSeq[i] == 'C'){
            mRNA[i] = 'G';
        }
        else if(aSeq[i] == 'A'){
            mRNA[i] = 'U';
        } 
        else if(aSeq[i] == 'T'){
            mRNA[i] = 'A';
        }
        else if(aSeq[i] == 'G'){
            mRNA[i] = 'C';
        }
    }

    //scans the mRNA sequence
    //CONVERT from mRNA to amiono Acid(letter)
    //this for loop iterates in groups of 3 because we want a 3-triplet amino acid to be able to get the amino acid letter
    for(i = 0; i < length; i = i + 3){

        //checks if the mRNA is greater then 5, if there is atleast one group of 3 
        if(length > i + 2){

            //takes the 3 characters from mRNA each time it goes through the loop
            strncpy(aminoAcid, mRNA + i, 3);
 
            //calling 'getCode' fucntion, to assign value for 'letter' variable
            letter = getCode(aminoAcid);

            //prints the 3-triplet amino acid and amino acid letter
            printf("%s: %c\n",aminoAcid, letter);
        }
    }
}



