#include<stdio.h>
/*
int func(int a) {
    //pass by value
 a = 6;
 printf("Inside Func : %d\n", a);
}
int main() {
    int a = 5;
    func(a);
    printf("Inside main : %d\n", a);

    //Inside Func :  6
    //Inside main : 5

    return 0;
}
*/

int func(int *a) {
//pass by referance
 *a = 6;
 printf("Inside Func : %d\n", *a);
}
int main() {
    int a = 5;
    func(&a);
    printf("Inside main : %d\n", a);

    //Inside Func :  6
    //Inside main : 6

    return 0;
}


