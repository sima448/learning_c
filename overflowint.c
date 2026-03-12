#include<stdio.h>
#include<limits.h>
int main() {
    int x = -2147483649;
    printf("%d \n", x);
    int y = INT_MIN, z = INT_MAX;
    printf("%d %d \n", y, z);
    long long a = 100000000000000009;
    printf("%lld \n", a);
    long b = 1000000;
    printf("%ld \n", b);
    printf("%d %d %d \n", sizeof(int), sizeof(long), sizeof(long long));
    return 0;
}

//int : 4 bytes
//long : 8/4 bytes depend upon the system  or long int yesa bhi write kr sakte he
// long long  : 8 bytes  ==> 64 bits ==> 2^64 
