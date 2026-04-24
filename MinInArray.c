#include<stdio.h>
#include<limits.h>
int main(){
    int N, i;
    scanf("%d", &N);
    int arr[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

    }
    //login to find max
    int min = INT_MAX;
    for(i = 0; i < N; i++) {
        if(arr[i] < min)
        min = arr[i];
    }
    printf("%d\n", min);

//    5
// 3 5 7 89 6
// 3
    return 0;
}