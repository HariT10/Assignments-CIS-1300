#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>


#define SIZE 100
#define NUMPROTEINS 64

//fucntion 1
bool isBasePair(char neu1, char neu2);

//fucntion 2
bool isItaDnaSequence(char strand1[SIZE], char strand2[SIZE]);

//fucntion 3
void reverse(char aStrand[SIZE]);

//fucntion 4
void complementIt(char aStrand[SIZE]);

//fucntion 5
bool isItPalindrome(char aStrand[SIZE]);

//fucntion 6
bool isStrandDnaPalindrome(char aStrand[SIZE]);


//fucntion 7
int howMany(char aStrand[SIZE], char neu);

//fucntion 8
void dnaToMrna(char aSeq[SIZE], char mRNA[SIZE]);

//function 9
char getCode (char protein [3]);
void translateDnaToMrnaProteins(char aSeq[SIZE]);


/*
void reverse(char aStrand[SIZE]);

void complementIt(char aStrand[SIZE]);

bool isItPalindrome(char aStrand[SIZE]);

bool isStrandDnaPalindrome(char aStrand[SIZE]);

int howMany(char aStrand[SIZE], char neu);

void dnaToMrna(char aSeq[SIZE], char mRNA[SIZE]);

void translateDnaToMrnaProteins(char aSeq[SIZE]);

*/


/**
 * ALL TESTING OCCURS HERE
 */
int main() {

    //for function 1
    bool resFunction1;
    bool resFunction2;
    bool resFunction3;
    //for function 2
    bool resFunc1;
    bool resFunc2;

    //for function 3

    //for function 4


    //for function 5

    //for function 6


    //for function 7


    //for function 8

    //for function 9
    


    //char string1[SIZE]; 
    //char string2[SIZE];
    //bool result1;
    //bool result2;


    //fucntion 1 
    printf("Testing fucntion 1: \n");
    resFunction1 = isBasePair('A' , 'T'); //true
    resFunction2 = isBasePair('A' , 'C'); //false
    resFunction3 = isBasePair('C' , 'G'); //true


    printf("resFunction1:  %s\n", resFunction1 ? "true" : "false");
    printf("resFunction2:  %s\n", resFunction2 ? "true" : "false");
    printf("resFunction3:  %s\n", resFunction3 ? "true" : "false");



    //fucntion 2
    printf("\n");
    printf("Testing Fucntion 2: \n");

    resFunc1 = isItaDnaSequence("CT" , "GA"); //true
    resFunc2 = isItaDnaSequence("CT" , "TA"); //false


    printf("resFunc1:  %s\n", resFunc1 ? "true" : "false");
    printf("resFunc2:  %s\n", resFunc2 ? "true" : "false");


    //fucntion 3
    printf("\n");
    printf("Testing Fucntion 3: \n");
    char test[] = "CATGG";
    printf("Original: %s\n", test);
    reverse(test);
    printf("Reversed: %s\n", test);


    //function 4 
    printf("\n");
    printf("Testing Fucntion 4: \n");

    char complement[] = "CATG";

    printf("Original: %s\n", complement);

    complementIt(complement);

    printf("Complemented: %s\n", complement);


    //function 5

    bool resPali1;

    printf("\n");
    printf("Testing Fucntion 5: \n");

    resPali1 = isItPalindrome("MADAM"); //true
 

    printf("resPali1:  %s\n", resPali1 ? "true" : "false");


    //function 6

    bool dnaPali1;

    printf("\n");
    printf("Testing Fucntion 6: \n");

    dnaPali1 = isStrandDnaPalindrome("AT"); //true
 

    printf("dnaPali1:  %s\n", dnaPali1 ? "true" : "false");


    //function 7

    printf("\n");
    printf("Testing Fucntion 7: \n");

    char aStrand[] = "GGCCGG";
    char nue = 'C';
    int totalNumber;

    totalNumber = howMany(aStrand, nue);

    printf("The number of '%c' in the DNA strand is: %d\n", nue, totalNumber);



    //fucntion 8
    printf("\n");
    printf("Testing Fucntion 8: \n");

    char aSeq1[] = "CATG";
    char mRNA[SIZE];

    dnaToMrna(aSeq1, mRNA);

    // Print the mRNA sequence
    printf("DNA Sequence: %s\n", aSeq1);
    printf("mRNA Sequence: %s\n", mRNA);




    //fucntion 9
    printf("\n");
    printf("Testing Fucntion 9: \n");
   

    char aSeq2[] = "CGTAGGCAT";

    translateDnaToMrnaProteins(aSeq2);


    return 0;
  
}


