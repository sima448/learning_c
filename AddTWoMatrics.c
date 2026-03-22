#include<stdio.h>
int main() {
    int m,n;
    scanf("%d %d", &m, &n);
    int nums1[m][n];
    int nums2[m][n];
    int nums3[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &nums1[i][j]);
        }
    }
    printf("##\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &nums2[i][j]);
        }
    }
    
    printf("###\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            nums3[i][j] = nums1[i][j] + nums2[i][j];


        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", nums3[i][j]);
        }
        printf("\n");
    }

   
    return 0;
}