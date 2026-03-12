#include<stdio.h>
int main() {
   int x = 'A', y = 'Z';
   int x1 = 'a', y1 = 'z';
   char c1 = '(', c2 = '@';
   printf("%d %d \n", x, y);
   printf("%d %d \n", x1, y1);
   printf("%d %d \n", c1 + c2, c2 - c1);
   printf("%d \n", sizeof(char));
   char m = 91;
   printf("%c \n", m);
   return 0;
}

//char ==> 1 Byte ==> 8 bits ==> 256 characters