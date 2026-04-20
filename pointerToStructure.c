#include<stdio.h>
struct A {
    long m;
    double n;

};
int main() {
    struct A a = {.m = 4, .n = 7.6};
    struct A* ptr = &a;
    printf("%ld %lf \n", (*ptr).m, (*ptr).n);

    return 0;
}
//output ==> 4 7.600000 
// -> : arrow, LL ==> Link List, BT ==> Binary Tree
// ptr->n