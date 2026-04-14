#include<stdio.h>
void getFirstFiveEvens(int arr[]) {
    
    int x = 2, i;
    for(i = 0; i < 5; i++) {
        arr[i] = x;
        x += 2;

    }

}
int main() {
    int arr[5];
    getFirstFiveEvens(arr);
    int i;
    for(i = 0; i < 5; i++)
    printf("%d ", arr[i]);
    printf("\n");
  //output ==> 2 4 6 8 10 
    return 0;
}