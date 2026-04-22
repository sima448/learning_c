#include<stdio.h>
int main() {
    int marks[3], i;
  for(i = 0; i < 3; i++) {
    scanf("%d", &marks[i]);
   }
   float sum = 0;
   for(i = 0; i < 3; i++) {
    sum += marks[i];
    printf("%d ", marks[i]);
   }
   printf("\n");

   float x = sum/3.0;
    printf("%f\n", x);

     //23 45 63
     //23 45 63 
     //43.666668
     
    return 0;
    
}