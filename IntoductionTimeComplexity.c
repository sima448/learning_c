#include<stdio.h>
int main() {
int N, i;
scanf("%d", &N);
int arr[N];
for(i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
}

int sum = 0, count = 0;
for(i = 0; i < N; i++) {
    sum += arr[i];
    count++;
   
}
printf("%d\n", sum);

return 0;
}