#include<stdio.h>
int main(){
    int marks[3][4] = {1, 2, 3, 4, 2, 7, 6, 8, 8, 9, 6, 9};
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}