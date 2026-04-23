#include<stdio.h>
int main(){
    int N, i, sum = 0;
    scanf("%d", &N);
    int marks[N];
     for(i = 0; i < N; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
     }
     printf("%d\n", sum);
    return 0;
}


//scansN integers from console and displays their sum