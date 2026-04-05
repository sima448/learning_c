#include<stdio.h>
int main() {
    /*
    char c1 = 'a', c2 = 'b', c3 = c2 + 1;
    printf("%c\n", c3);// c
    printf("%d\n", c3);// 99
    */
    char word[100] = "aBcdRfegFBKLI";  
    for(int i = 0; word[i] != '\0'; i++) {
      if(word[i] > 90) {
        word[i] -= 32;

      }
    }
    printf("%s\n", word);

    return 0;
}

//words only contains alphabets : " ABHGfdhjjjkNBHJUI" convert i to uppercase
// A : 65,  B : 66.......... Z : 90
// a : 97,  b : 98...........z : 122
// index start 0, 1 , 2....... so on
// in which All Uppercase latter and All lowercase latter difference b/w 32
