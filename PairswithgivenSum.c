#include<stdio.h>
int main(){
     int N, i, j, x;
     scanf("%d", &N);
     int arr[N];
     for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
     }
     scanf("%d", &x);
     for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
          if (arr[i] + arr[j] == x) {
            printf("%d + %d = %d \n", arr[i], arr[j], x);
          }
        }
     }

    return 0;
}
//num1 + num2, num2 + num1 //this problem
//an element considered twice /// ------
// i = 0 : j = 0, 1, 2, 3.....N -1
// i = 1 : j = 0, 1, 2, 3.....N -1
// Given an array, and an int x, all the pairs that have sum = x;
// [1, 5, 3, 2, 4] x = 6
//{first, second}, first + second = 6
// [a, b, c, d, e, f]
//{a, b} {a, c}, .................
//{b, c} {b, d}, .................