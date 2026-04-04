#include<stdio.h>
int main() {
     char word1[100] = "This is awesome!!!";
     int len = 0, i;
     while(word1[i] != '\0') {
        len++;
        i++;
     }
     
     printf("%d\n", len);
    return 0;
}