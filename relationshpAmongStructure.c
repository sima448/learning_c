#include<stdio.h>
struct Z {
    long m;
    double n;
   

};

struct A {
 int x, y;
 char c;
};

struct Y {
    char p;
    float q;
    struct Z z;
    struct A a;

};

struct X {
    int a;
    int b;
    struct Y y;
    struct Z z;

};
int main() {


    return 0;
}
//x -> y -> z
//    X
//   / \
//  Y   Z
//