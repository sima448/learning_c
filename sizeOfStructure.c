#include<stdio.h>
struct Person {
int age;
long long gender;
};
int main() {
    printf("%ld \n", sizeof(struct Person));
    //output 16
    return 0;
}