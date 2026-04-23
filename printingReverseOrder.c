#include<stdio.h>
int main() {
     int N, i;
     scanf("%d", &N);
     int a[N];
     for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
     }
      for(i = N - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }  
   printf("\n");
     
// 6
// 1 2 3 4 5 6 
// 6 5 4 3 2 1 
    return 0;
}

//scan a N
//Scan N Integer
//print those integers in reverse
// N = 3
//  7 3 4
// 7 4 3