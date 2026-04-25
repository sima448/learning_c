#include<stdio.h>
int main() {
    int N, i, j;
    scanf("%d", &N);
    int arr[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for(j = 0; j < N; j++){
    int x = arr[j];
    int count = 0;
    for(i = 0; i < N; i++) {
        if(arr[i] == x)
        count++;
    }
    printf("Frequency of %d = %d\n", x, count);
}
// 7
// 1 2 3 4 2 5 2
// Frequency of 1 = 1
// Frequency of 2 = 3
// Frequency of 3 = 1
// Frequency of 4 = 1
// Frequency of 2 = 3
// Frequency of 5 = 1
// Frequency of 2 = 3

    return 0;
}