#include<stdio.h>
#include<string.h>
int main() {

    char s1[100] = "abchtyuijjjhjgffds";
    char s2[100] = "yuij";
    char *s3 = strstr(s1, s2);
     printf("%s\n", s3);


     /*

    char s1[100] = "abcht";
    char s2[100] = "abcr";
    int x = strcmp(s1, s2);
    printf("%d\n", x);

    */
    return 0;
    
}










/*
// 9 10
// babcde babkf
// string comp
// 

*/


