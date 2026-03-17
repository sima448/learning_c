#include<stdio.h>
int main() {
       int a = 8, b  = 7, c = 5;
       int d = a>b && b>c;
       int d1 = a<b && b<c;
       int d2 = a>b || b>c;
       int d3 = !(a +2<b || b<c);
       int x = a>=b && b>=c;
       printf("%d \n", d);
       printf("%d \n", d1);
       printf("%d \n", d2);
       printf("%d \n", d3);
       printf("%d \n", x);

     return 0; 
}

// Loical Operators
// Logcal Gates : AND, OR, NOT
// Logical AND : && , OR : ||, NOT :  !