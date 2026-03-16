#include<stdio.h>
int main() {
    int x = 5 + 3 % 4;//8
    int x1 = 5 * 4 / 3;//6
    int x2 = 5 + 9 % 4 * 3 -2 + 6 / 4;

    int y = 4;
    int z = y++ * ++y;
    printf("%d \n", x);
    printf("%d \n", x1);
    printf("%d \n", x2);
     printf("%d %d\n", z, y);



    return 0;
}



// 5 + 1 * 3 - 2 + 6 / 4
// 5 + 3 - 2 + 6 / 4
// 5 + 3 - 2 + 1
// 9 - 2 
// 7
//BODMAS ===> convention, precedence rule
// (*, /, %) [L -> R] > (+, -) [L , R]