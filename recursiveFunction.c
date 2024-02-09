#include <stdio.h>

// Recursive Function

int factorial(int n);

int main(){

    int x; 
    printf("Enter the number: ");
    scanf("%d", &x);

    // Make sure the number is positive integer
    if( x < 0 ){
        printf("Please try to add positive number \n");
    }else{
        int result = factorial(x);
        printf("The result is: %d \n", result);
    }

    return 0;
}

int factorial(int n){

    if(n == 0 || n ==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }

}