#include<stdio.h>
int main() {
    /*
    char names[5][100] = {{'a', 'b', 'c'}, "Milk", "Jon", "Suman", "Saloni", "Ram"};
     for(int i = 0; i < 5; i++) {
       printf("%s\n", names[i]);
     }
    */

    //user input
    char names[5][100];
     for(int i = 0; i < 5; i++) {
       scanf("%s", names[i]);

     }
    for(int i = 0; i < 5; i++) {
       printf("%s\n", names[i]);

    }

    return 0;
}