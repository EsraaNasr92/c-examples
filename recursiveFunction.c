#include <stdio.h>

// Recursive Function

int factorial(int n);

int main(){

    int x; 
    printf("Enter the number: ");
    scanf("%d", &x);

    int result = factorial(x);

    printf("The result is: %d \n", result);

    return 0;
}

int factorial(int n){

    if(n == 0 || n ==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }

}