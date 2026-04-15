#include<stdio.h>
struct Point {
  int x, y;
};

int main() {
 struct Point p;
  scanf("%d %d", &(p.x), &(p.y));
  printf("%d %d\n", p.x, p.y);
  //input ==> 6 7
   // output ==>6 7
    return 0;
}




/*
struct Point {
  int x, y;
};

int main() {
 struct Point p;
  p.x = 5;
  p.y = 1;
  p.x++;
  p.y = p.y + p.x;
  printf("%d %d\n", p.x, p.y);//output ==> 6 7
    return 0;
}
*/

/*
struct Point {
  int x, y;
};

int main() {
 struct Point p;
  p.x = 5;
  p.y = 1;
  printf("%d %d\n", p.x, p.y);//output ==> 5 1
    return 0;
}
*/

// using dot operator | .
///structure : struct
//UDF==> user define datatype
//x-y plain, 2-d plane
