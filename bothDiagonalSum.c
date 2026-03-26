#include<stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
             scanf("%d", &arr[i][j]);
        }
     
        
    }
    
    int sum1 = 0;
    i = 0, j = 0;
    while (i < n) {//i -->> n-1
            sum1 += arr[i][j];
            i++;
            j++;
        }
        printf("%d \n", sum1);

    int sum2 = 0;
    i = 0, j = n-1;
    while (i < n) {//i -->> n-1
            sum2 += arr[i][j];
            i++;
            j--;
        }
        printf("%d \n", sum2);

    int sum3 = sum1 + sum2;
    printf("%d \n", sum3);
    
    return 0;
         
}
//output
// 3 -->  3 * 3 = row * column
// 1 2 3
// 4 5 8
// 5 7 9
// 15 right diagonal sum
// 13 left dialonal sum
// 28 right and left(both) diagonal sum