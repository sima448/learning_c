#include<stdio.h>
int main() {
    int arr[4][3];
    /*
    int j;
    for(int j = 0; j < 3; j++){
        scanf("%d", &arr[0][j]);
    }
    for(int j = 0; j < 3; j++){
        scanf("%d", &arr[1][j]);
    }
    for(int j = 0; j < 3; j++){
        scanf("%d", &arr[2][j]);
    }
    for(int j = 0; j < 3; j++){
        scanf("%d", &arr[3][j]);
    }
    for(int j = 0; j < 3; j++){
        printf("%d ", arr[0][j]);
    }
    printf("\n");

    for(int j = 0; j < 3; j++){
        printf("%d ", arr[1][j]);
    }
    printf("\n");
     
    for(int j = 0; j < 3; j++){
        printf("%d ", arr[2][j]);
    }
    printf("\n");

    for(int j = 0; j < 3; j++){
        printf("%d ", arr[3][j]);
    }
    printf("\n");
  */


  //method second
   int i, j;
   for(int i = 0; i < 4; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &arr[i][j]);
    }
   }
   for(int i = 0; i < 4; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", arr[i][j]);
    }
     printf("\n");
   }

    return 0;
}









//matrix m * n : mn
// 4 * 3
//table of numbers
// matrix ==> matrix ke indexing ways
// 1 2 3 ==> 0,0 | 0,1 | 0,2
// 0 1 2 ==> 1,0 | 1,1 | 1,2
// 4 6 3 ==> 2,0 | 2,1 | 2,2
// 1 1 2 ==> 3,0 | 3,1 | 3,2


//nums[2][2]
//nums[i][j] : int
//nums[i] ==> 1-D array
//nums ==> 2-D array