#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int q = x/y;
    int r = x - q * y;
    printf("%d \n", r); 
    return 0;
}