#include<stdio.h>
int main() {
    /*
    int x = 50;
    if(x > 0) 
    printf("x > 0 \n");
     if(x >= 50) 
    printf("x >= 50 \n");
     if(x <= 50) 
    printf("x <= 50 \n");
     if(x > 50) 
    printf("x > 50 \n");
    */


    /*
     int n1 = 2, n2 = 3, n3 = 5;
     int x;
     scanf("%d", &x);
     int count = 0;
     if(x % n1 == 0){
      count++;
      printf("Divisible by 2 \n");  
     }
     
     if(x % n2 == 0){
      count++;
      printf("Divisible by 2 \n");  
     }
     
     if(x % n3 == 0){
      count++;
      printf("Divisible by 2 \n");  
     }
     
    printf("%d\n", count);

   */

    int x;
    scanf("%d", &x);
    if(x > 70){
        printf("Grade A \n");

    }
    if(x > 40 && x <= 70){
        printf("Grade B \n");

    }
    if(x >= 0 && x <= 40){
        printf("Grade C \n");

    }
   


    return 0;

}