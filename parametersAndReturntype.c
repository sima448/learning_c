#include<stdio.h>
/*
//tack something and give something

int getSum(int a, int b) {
    return a + b;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);     
    int c = getSum(a, b);
    printf("%d\n", c);

    return 0;
}
    // input ==> 4 7
    // output ==> 11
*/

//tack something but give nothing
void printfSum(int a, int b) {
    //core logic
    printf("%d\n", a+b);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);     
    printfSum(a, b);

    return 0;
}


// input ==> 4 7
// output ==> 11