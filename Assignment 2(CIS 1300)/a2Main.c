#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>


#define SIZE 100
#define NUMPROTEINS 64




bool isItaDnaSequence(char strand1[SIZE], char strand2[SIZE]);

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

    bool resFunction1;
    bool resFunction2;
    bool resFunction3;
    //char string1[SIZE]; 
    //char string2[SIZE];
    //bool result1;
    //bool result2;


    //fucntion 1 
 



    //fucntion 2
    printf("Testing Fucntion 2: \n");
    resFunction1 = isItaDnaSequence('CT' , 'GA'); //true
    printf("resFunction1:  %s\n", resFunction1 ? "true" : "false");




/*

    //fucntion 3
    char test[] = "gdc";

    printf("Original: %s\n", test);

    reverse(test);

    printf("Reversed: %s\n", test);

*/


    return 0;
  
}
