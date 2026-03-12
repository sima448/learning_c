#include<stdio.h>
int main() {
    int x = 1000000000, y = 1000000000;
    //int z = x*y;     // -1486618624 it is overflow
    //long long z = x * y;     //  -1486618624 it is given same overflow
    long long z = (long long)x * y; // 1000000000000000000 solve this problem
    printf("%lld \n", z);
    return 0;
}