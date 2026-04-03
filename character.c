#include<stdio.h>
int main(){
    /*
    char word[7] = {'a','b','c','d','e','f','g'};
    int i;

    for(i = 0; i < 7; i++) {
        scanf("%c", &word[i]);
    }
    for(i = 0; i < 7; i++) {
        printf("%c", word[i]);
    }
    printf("\n");


    // something understand
   // int arrays
   // char arrays
   // ' ' ==> in which space is count because space is a character.

   //input ==> a b c d e f g ==>7 character
   //output ==> a b c d ==> character with space 7 output

   // abcdefg ==> input
   // abcdefg ==> output

*/



/*
// other
    char word[7] = {'a','b','c','d','e','f','g'};
    int i;
    for(i = 0; i < 7; i++) {
        printf("%c", word[i]);
    }
    printf("\n");


// output ==> abcdefg
*/


/*
// other
    char word[9] = "SimaSingh";
    int i;
    for(i = 0; i < 9; i++) {
        printf("%c\n", word[i]);
    }
    printf("\n");

    // output ==> 
    // S
    // i
    // m
    // a
    // S
    // i
    // n
    // g
    // h
    // ..
    // ..
    // ..
    // space bhi print ho raha he
*/



    char word[9] = "SimaSingh";
    int i;
    for(i = 0; word[i] != '\0'; i++) {
        printf("%c\n", word[i]);
    }
     //output
    // S
    // i
    // m
    // a
    // S
    // i
    // n
    // g
    // h
    return 0;
}

