#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);
     //int y = x % 2 == 0;
     //printf("%d \n", y);



     //or

     if(x % 2 == 0) {
        printf("Even \n");
     } else {
        printf("Odd \n");
     }

    return 0;
}