#include<stdio.h>
int func(int x) {
  x = 0;
  return x;
}


int main() {
     int a = 5;
     a = func(a);
     printf("%d\n", a);
    return 0;
}


/*
void func1(int* y) {
   *y = 9;
}
void func(int* x) {
     //func1(x);//output 6
    *x = 6;
      func1(x);// output 9
}

int main() {
     int a = 5;
     func(&a);
     printf("%d\n", a);
    return 0;
}
 */




/*
void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int a = 5, b = 6;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    //output 6 5
    return 0;
}
*/