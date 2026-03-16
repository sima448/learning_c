#include<stdio.h>
int main(){
      int a = 10;
      int a1 = 20;
      int a2 = 30;
      int a3 = 40;
      ++a;
      --a1;
      a2++;
      a3--;
      printf("%d \n", a);
      printf("%d \n", a1);
      printf("%d \n", a2);
      printf("%d \n", a3);


    return 0;
}

//(post  ++, --)[L, R] > (pre  ++, --) [R, L]