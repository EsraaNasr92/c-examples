#include <stdio.h>

// Fabonacci Function

int fib(int n);

int main(){

   int number;
   printf("Enter the number: ");
   scanf("%d", &number);

   int result = fib(number);

   printf("The result is: %d \n ", result);

    return 0;
}

int fib(int n){
    if(n == 0 ){
        return 0;
    }else if (n == 1){
        return 1;
    }else{
        return fib(n-1) + fib(n-2);
    }
}