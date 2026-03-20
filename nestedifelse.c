#include<stdio.h>
int main() {
    int x, y;
    int z;
    scanf("%d %d %d", &x, &y, &z);
    /*
    if(x > 0 && y > 0){
        printf("Hello \n");
     
    }
   */

   /*
    int z;
    if( x > 0) {
        printf("Hi \n");

        if( y  > 0) {
            printf("Hello \n");

            if( z > 10) {
               printf("Hey \n"); 
            }
        }
        printf("Bye \n");
    }
  */

    
    if( x > 0) {
        printf("Hi \n");

          if( y  > z) {
            printf("Hello \n");
            } else {
                printf("Heee \n");
            }

    } else {

        if( z > 0){
         // if-else condition
           printf("Cow \n");

        } else if ( y > 0) { //// if-else condition
            if(x + y > z){
              printf("Ox \n");
            }else{
              printf("Dog \n");
            }
        } else {
         // if-else condition
         printf("Elephent \n");
      }
    }


    return 0;
}