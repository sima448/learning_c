#include<stdio.h>
#include<limits.h>
int main() {
    int N, i;
    scanf("%d", &N);
    int arr[N];
    int k;
    scanf("%d", &k);
    for(i = 0; i < k; i++){
        scanf("%d", &arr[i]);

    }
    int x, index;
    scanf("%d %d", &x, &index);
    for(i = k-1; i >= index; i--) {
        arr[i+1] = arr[i];

    }
    arr[index] = x;
    for(i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
// 9 <== array size (N)
// 6 <== array given size (k) 
// 23 65 56 78 98 67 <== this value (k)
// 45 3 <== value(k = 45) insert in index (i = 3)
// 23 65 56 45 78 98 67 32765 1737390624 
// 0  1  2  3  4   5  6  ----   ----  index number and which value is exist the index that print but where the value is not present that is insert garbage value



//////
// 9
// 6
// 23 65 56 78 98 67
// 45 3
// 23 65 56 45 78 98 67 32765 1737390624 