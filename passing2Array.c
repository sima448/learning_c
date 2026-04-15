#include<stdio.h>

void func(int m, int n ,int mat[][n]) {
     
  int i, j;
  for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++)
    printf("%d ", mat[i][j]);
  }
  printf("\n");
}
int main() {
    
  int arr[3][2] = {{1, 3}, {4, 6}, {6, 8}};
    func(3, 2, arr);
    /// 1 3 4 6 6 8 
    return 0;
}









/* // passing 2D Array 
void func(int* a, int m, int n) {
  int i;
  for(i = 0; i < m*n; i++)
  printf("%d ", *(a+i));
}
int main() {
    
  int arr[3][2] = {{1, 3}, {4, 6}, {6, 8}};
    func(&arr[0][0], 3, 2);
    
////1 3 4 6 6 8 

    return 0;
}





*/