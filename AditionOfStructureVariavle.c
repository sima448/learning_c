#include<stdio.h>
struct ComplexNum {
    int real, img;
};
int main() {
    
   struct ComplexNum num1 = {.real = 2, .img = 7};
    struct ComplexNum num2 = {.real = 3, .img = 4};
    struct ComplexNum num3 = {.real = num1.real + num2.real, .img = num1.img + num2.img};
    printf("%d %d\n", num3.real, num3.img);
    // 5 11
    return 0;
}

// complex number
// A + iB : 5 + i9
// A1 + iB1 , A2 + iB2
//(A1 + A2) + i(B1 + B2)