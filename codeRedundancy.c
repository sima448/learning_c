#include<stdio.h>
/*
int main() {

int a, b;
scanf("%d %d", &a, &b);
int i, c;
c = 0;
for(i = 1; i <= a; i++) {
    if(a % i == 0)
    c++;
}
if (c == 2)
printf("%d is prime\n", a);
c = 0;
for(i = 1; i <= b; i++) {
    if(b % i == 0)
    c++;
}
if (c == 2)
printf("%d is prime\n", b);

// this code is code redundency that means some code repeted again and again;
// input == > 2 13
// output
// 2 is prime
// 13 is prime
// input or ouput
// 4 6 ==> nothing
///////////////////////////////////




// solve the redundency but this code is not work properly
int n;
scanf("%d", &n);
int i, c;
c = 0;
for(i = 1; i <= n; i++) {
    if(n % i == 0)
    c++;

} 
if(c == 2) {
printf("%d is prime\n", n);
} else {
    printf("%d is not prime\n", n);
}
// 2 4
// 2 is prime
// 4 6
// 4 is not prime
// 6 4
// 6 is not prime
return 0;

}
*/










//*************************************************
///  solve the redundency

int isPrime(int n){
    int i, c = 0;
    for(i = 1; i <= n; i++) {
        if(n % i == 0)
        c++;

    }
    if(c == 2)
        return 1;
    else
        return 0;
}

int main(){
   int a, b;
   scanf("%d %d", &a, &b);
   int ans = isPrime(a);
   if(ans == 1)
   printf("%d is prime\n", a);
   else 
   printf("%d is not prime\n", a);


   ans = isPrime(b);
   if(ans == 1)
   printf("%d is prime\n", b);
    else 
    printf("%d is not prime\n", b);


    
  //input  13 78
  //output
// 13 is prime
// 78 is not prime

// input 4 6
//output
// 4 is not prime
// 6 is not prime

// input 6 7
// output
// 6 is not prime
// 7 is prime

return 0;

}