#include<stdio.h>
struct Person {
    char name[50];
    int age;
    char gender;
};
int main(){
    int N, i;
    scanf("%d", &N);
    struct Person persons[N];
    for(i = 0; i < N; i++)
    scanf("%s %d %c", persons[i].name, &persons[i].age, &persons[i].gender);
    struct Person p1 = {.name = "Ram", .age = 10, .gender = 'M'};

    for (i = 1; i < N; i++) {
        int j = i;
        while (j > 0 && persons[j].age < persons[j - 1].age) {
        //swap
        struct Person temp = persons[j];
        persons[j] = persons[j - 1];
        persons[j - 1] = temp;
        j--;
    }
}
for(i = 0; i < N; i++)
printf("%s %d %c\n", persons[i].name, persons[i].age, persons[i].gender);

    return 0;
}
//input
// 2 
// asd 13 m
// ad 14 f
//output
// asd 13 m
// ad 14 f