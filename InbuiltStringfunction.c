#include<stdio.h>
#include<string.h>
int main() {
    /*
    char s[100] = "I love to Code";
    int l = strlen(s);
    printf("%d\n", l);
    // output ==> 14
   */


   //////////////************/
   char s1[100] = "I love to Code";
   char s2[100] = " in C.";
    strcat(s1, s2);
    printf("%s %s\n", s1, s2);

    return 0;
}