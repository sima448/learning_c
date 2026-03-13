#include<stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Sum : %d \n", x + y);
    printf("Differance : %d \n", x - y);
    printf("Division : %d \n", x / y);
    printf("Product : %d \n", x * y);
    printf("Modulus : %d \n", x % y);
    float z = (float)x/y; //typecasting
    printf("%f \n", z);
    return 0;
}