#include<stdio.h>
#include<limits.h>
struct Person {
   char name[50];
   int age;
   char gender;
};
int main() {
    int N, i;
    scanf("%d", &N);
    struct Person persons[N];
    for(i = 0; i < N; i++) {
        scanf("%s %d %c", persons[i].name, &persons[i].age, &persons[i].gender);
    }
    printf("*************\n");
    int max = INT_MIN, j;
    for(i = 0; i < N; i++) {
        if(persons[i].age > max) {
            max = persons[i].age;
            j = i;
        }
    }
    printf("%s\n", persons[j].name);
     
// 3
// gfgf 8 m
// hjhj 98 f
// nbnb 7 M
// *************
// hjhj


/*
struct Person {
   char name[50];
   int age;
   char gender;
};
int main() {
    int N, i;
    scanf("%d", &N);
    struct Person persons[N];
    for(i = 0; i < N; i++) {
        scanf("%s %d %c", persons[i].name, &persons[i].age, &persons[i].gender);
    }
    printf("*************\n");
    for(i = 0;i < N; i++) {
    printf("%s %d %c\n", persons[i].name, persons[i].age, persons[i].gender);
    }
//   3
// soshi 84 M
// ask 45 F
// aknuj 54 M
// *************
// soshi 84 M
// ask 45 F
// aknuj 54 M

*/


/*
struct Person {
   char name[50];
   int age;
   char gender;
};
int main() {
struct Person p = {.name = "shyam",  .age = 45, .gender = 'M'};
    printf("%s %d %c\n", p.name, p.age, p.gender);
    ///shyam 45 M
    */
    return 0;
}