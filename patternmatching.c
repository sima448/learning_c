#include<stdio.h>
int main() {
    char s1[100];
    char s2[100];
    scanf("%s %s", s1, s2);
     int m = 0, n = 0, i = 0, j;
     while(s1[i] != '\0') {
        i++;
        m++;
     }

     while(s2[i] != '\0') {
        i++;
        n++;
     }
     int match = 0;
     for(i = 0; i <= m-n; i++) {
        match = 1;
      for(j = i; j <= i+n-1; j++) {
        if(s1[j] != s2[j-i]){
            match = 0;
            break;
            
        }
      }
      if(match == 1)
      break;
      
     }
    if(match == 1)
       printf("yes\n");
    else 
       printf("no\n");

    return 0;
}