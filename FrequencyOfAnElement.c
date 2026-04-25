#include<stdio.h>
int main() {
    int N, i;
    scanf("%d", &N);
    int arr[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int count = 0;
    for(i = 0; i < N; i++) {
        if(arr[i] == x)
        count++;
    }
    printf("%d\n", count);
// 7
// 1 2 3 4 2 5 2
// 2
// 3

    return 0;
}
//Given An Array
//int x
//frequency of x : num of times x appears in the array
//[4, 5, 6, 3, 7, 5, 2, 1] x = 5