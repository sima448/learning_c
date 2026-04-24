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
    int max = INT_MIN;
    for(i =1; i < N; i++) {
        if(arr[i] > max)
        max = arr[i];
    }
    printf("%d\n", max);

//    5
// 3 5 7 89 6
// 89
    return 0;
}

/*
#include<stdio.h>
int main(){
    int N, i;
    scanf("%d", &N);
    int arr[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

    }
    //login to find max
    int max = arr[0];
    for(i =1; i < N; i++) {
        if(arr[i] > max)
        max = arr[i];
    }
    printf("%d\n", max);

   // 5
   // 2 -3 45 6 4
   // 45
    return 0;
}*/
