#include<stdio.h>
#include<limits.h>
int main() {
    int N, i;
    scanf("%d", &N);
    int arr[N];
    int k;
    scanf("%d", &k);
    for(i = 0; i < k; i++) {
        scanf("%d", &arr[i]);
    }
    int index;
    scanf("%d", &index);
    for(i = index+1; i < k; i++){
        arr[i - 1] = arr[i];
    }
    for(i =0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
// 6   <== size[N]
// 4    <== given size[k]
// 23 4 5 7 <== given[k] value
// 2        <== delete index 2
// 23 4 7 7 224293696 32765 
//  0 1 2 --  -----    ---- <== in which value present then return index value but value not present return garbage(---) valuu