#include<stdio.h>
int main() {
    /*
    // reverce this text
     char word1[100] = "This is awesome!!!";
     int len = 0, i;
     while(word1[i] != '\0') {
        len++;
        i++;
     }
     for(i = len - 1; i >= 0; i--){
        printf("%c", word1[i]);
     }
     printf("\n");
     //output ===> !!!emosewa si sihT
     */
       
     /*
     //vowels in a string print small latter vowels
     char word1[100] = "this is awesome!!!";
     int len = 0, i = 0, count = 0;
     while(word1[i] != '\0') {
        if(word1[i] == 'a' || word1[i] == 'e' || word1[i] == 'i' || word1[i] == 'o' || word1[i] == 'u') {
            count++;
        }

        len++;
        i++;
     }
     printf("%d\n", count);
     ///output ===> 6
     */


     /*
     //vowels in a string print small latter vowels
     char word1[100] = "THIS IS AWESOME!!!";
     int len = 0, i = 0, count = 0;
     while(word1[i] != '\0') {
        if(word1[i] == 'A' || word1[i] == 'E' || word1[i] == 'I' || word1[i] == 'O' || word1[i] == 'U') {
            count++;
        }

        len++;
        i++;
     }
     printf("%d\n", count);
     ///output ===> 6
    */
    //vowels in a string print small latter vowels
     char word1[100] = "THIS IS AWESOME!!! and this is very beautiful";
     char vowels[100] = "aeiouAEIOU";
     int len = 0, i = 0, count = 0, j;
     while(word1[i] != '\0') {
        for(j = 0; vowels[j] != '\0'; j++) {
            if(word1[i] == vowels[j]){
            count++;
            break;
            }
            
        }

        len++;
        i++;
     }
     printf("%d\n", count);
     ///output ===> 15

    return 0;
}