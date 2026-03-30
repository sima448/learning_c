#include<stdio.h>
int main() {
        int m, n, p, i, j, k;
        scanf("%d %d %d", &m, &n, &p);
        int arr1[m][n];
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                scanf("%d", &arr1[i][j]);
            }
        }
        int arr2[n][p];
        for(i = 0; i < n; i++) {
            for(j = 0; j < p; j++) {
                scanf("%d", &arr2[i][j]);
            }
        }
        int arr3[m][p];
        for(i = 0; i < m; i++) {
            for(j = 0; j < p; j++) {
                arr3[i][j] = 0;
                for(k = 0; k < n; k++) {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        for(i = 0; i < m; i++) {
            for(j = 0; j < p; j++) {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    return 0;
}