#include <stdio.h>

/* Write a function that receives a positive integer & return 1
if it is prime and 0 otherwise */

int primeFunction(int n);

int main(){

    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if(number > 0){
        int result = primeFunction(number);

        if(result == 1){
            printf("Number %d is prime: ", number);
        }else{
            printf("Number %d is not prime: ", number);
        }
        
    }else{
        printf("Please enter positive value ");
    }

    return 0;
}

int primeFunction(int n){
    if(n <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            return 0; // If n is divisible by any number other than 1 and itself, it's not prime
        }
    }

    return 1; // If no divisor found, it's prime
}