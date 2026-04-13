#include<stdio.h>
void traverse(int* p, int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}
int main() {
     int arr[5] = {1, 2, 3, 4, 5};
        traverse(arr, 5);
    return 0;
}