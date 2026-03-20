#include<stdio.h>
int main() {
    // int x = 1, y = 2, temp;
    //     temp = x;
    //     x = y;
    //     y = temp;
    //     printf("%d %d \n", x, y);



        // without decleare temp variable swap the value.
        int x = 4, y = 3;
         x = x + y;
         y = x - y;
         x = x - y ;
          printf("%d %d \n", x, y);


    return 0;
}