#include<stdio.h>
void traverse(int p[], int size) {
   int i;
    for(i = 0; i < size; i++) {
        p[i] *= -1;
    }
    
}
int main() {
     int arr[5] = {1, 2, 3, 4, 5};
        traverse(arr, 5); 
        int j;
        for(j = 0; j < 5; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
        return 0;
    
}