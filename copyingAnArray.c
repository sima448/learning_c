#include<stdio.h>
int main() {
      int a[7] = {10, 9 ,11, 45, 23, 9, 5};
      int b[7];
      
      int i;
      for (i = 0; i < 7; i++) {
        b[i] = a[i];
      }
      for (i = 0; i < 7; i++) {
        printf("%d ", b[i]);
      }
   printf("\n");
    return 0;
}

//Given an arrsy of some size
// Copy the elements of this array in another array 