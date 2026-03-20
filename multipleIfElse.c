#include<stdio.h>
int main(){
    int x = 50;// 97 run kr sakte he
    //first if-else
    if(x % 2 == 0){
       printf("EVEN \n");
       printf("Div by 2 \n");
    } else {
     printf("ODD \n");
       printf("Not Div by 2 \n");
    }
    
    //second if-else
    if(x > 50){
       printf("Running 2nd if.. \n");
       printf("Greater than 50 \n");

    } else {
     printf("Running 2nd else.. \n");
       printf("Smaller than 50 or equal to 50 \n");
    }
}