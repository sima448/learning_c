#include<stdio.h>
struct Point {
    int x, y;
} p1, p2;
int main() {
    p1.x = 8;
    p1.y = 9;
    printf("%d %d\n", p1.x, p1.y);
    return 0;
}

