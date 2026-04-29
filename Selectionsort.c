#include<stdio.h>
#include<limits.h>
int main(){
   int N, i, j;
   scanf("%d", &N);
   int arr[N];
   for (i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
   }
   for (i = 0; i < N; i++) {
    //finding minimum element in (i.......N-1) and swap it with arr[i]
    int min = INT_MAX, idx;
    for(j = i; j < N; j++) {
        if(arr[j] < min) {
            min = arr[j];
            idx = j;
        }
    }
    int temp = arr[i];
    arr[i] = arr[idx];
    arr[idx]= temp;
   }
   for (i = 0; i < N; i++) {
    printf("%d ", arr[i]);
   }
    printf("\n");
    return 0;

//  6
// 10 2 3 4 1 5
// 1 2 3 4 5 10 
}
// 10 2 3 4 1 5 
//1st : smallest element at idx = 0