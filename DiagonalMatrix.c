#include<stdio.h>
int main() {
    /* 
    int arr[3][3], n;
    
    //right diagonal print 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             scanf("%d", &arr[i][j]);
        }
     
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             if(i == j) {
                printf("%d ", arr[i][j]);
            }
        }
      printf("\n");
    }
        //output
        //3 3  row * column
        // 1 2 3
        // 4 5 6
        // 7 8 9
        //all right digonal
        // 3  
        // 3 
        // 7 
    

*/

/*
   //right diagonal ka sum print
   int n, i, j;
   scanf("%d", &n);
   int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
             scanf("%d", &arr[i][j]);
        }
     
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
            sum += arr[i][i];
        }
    printf("%d \n", sum);

    /////////////////other way 
    int n, i, j;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
             scanf("%d", &arr[i][j]);
        }
     
    }
    int sum = 0;
    i = 0, j = 0;
    while (i < n) {//i -->> n-1
            sum += arr[i][j];
            i++;
            j++;
        }
        printf("%d \n", sum);



        //output
        // 3 --> 3 * 3 
        // 1 2 3 
        // 4 5 6
        // 7 8 9
        // 15 --> sum of right diagonal
    
*/


 

//left diagonal sum
int n, i, j;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
             scanf("%d", &arr[i][j]);
        }
     
    }
    int sum = 0;
    i = 0, j = n-1;
    while (i < n) {//i -->> n-1
            sum += arr[i][j];
            i++;
            j--;
        }
        printf("%d \n", sum);
         

        //output
        // 3 
        // 1 3 2
        // 2 3 4
        // 5 6 7
        // 10 


    return 0;
}