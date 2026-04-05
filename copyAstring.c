#include<stdio.h>
int main() {
    char sentance1[100] = "Be a Top Programmer";
    char sentance2[200];
    int i;
    for(i = 0; sentance1[i] != '\0'; i++) {
      sentance2[i] = sentance1[i];
    } 
    sentance2[i] = '\0';
    printf("copyAstring : %s\n", sentance2);
    return 0;
}