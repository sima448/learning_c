#include<stdio.h>
int main() {
    float a = 1.123456789; //1.123457 
    printf("%f \n", a);
    printf("%.2f \n", a);
    printf("%.3f \n", a);
    printf("%.8f \n", a);
    printf("%d %d \n", sizeof(float), sizeof(double));

    return 0;
}


// 6 digits after decimal, rounded off till first 6 digits
// precision : accurate value
//double : plateform dependent , long double 