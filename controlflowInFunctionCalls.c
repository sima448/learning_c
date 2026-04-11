#include<stdio.h>
/*
int func(int x){
    printf("func :: Line1\n");
    printf("func :: Line2\n");

    if (x == 1)
    return 0;
    printf("func :: Line3\n");
    return 0;
}
int main() {
    int x;
    printf("main :: Line1\n");
    func(x = 1);
    printf("main :: Line2\n");

// main :: Line1
// func :: Line1
// func :: Line2
// main :: Line2

    return 0;
}
     */
///////////////////////////////////////////////////////////////////
     /*
    int func(int x){
    printf("func :: Line1\n");
    printf("func :: Line2\n");

    if (x == 1)
    return 0;
    printf("func :: Line3\n");
    return 0;
}
int main() {
    int x;
    printf("main :: Line1\n");
    func(x = 11);
    printf("main :: Line2\n");

// main :: Line1
// func :: Line1
// func :: Line2
// func :: Line3
// main :: Line2

    return 0;
}
    */

    //////////////******************************** */
    int func2(int x) {
        return 9;
    }
    int func1(int x) {
        return func2(x) + 5;
    }
    int func(int x) {
      return func1(x) + 3;
    }
    int main(){
        int x;
        int a = func(x = 11);
            printf("%d\n", a);
        return 0;
    }