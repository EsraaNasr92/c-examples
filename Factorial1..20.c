#include <stdio.h>

// Recursive Function and print out the factorial of numbers 1 ... 20

int factorial(int n);

int main(){

    for ( int x = 1; x < 20; x++){

        int result = factorial(x);
        printf("The factorial number of %d is: %d \n", x ,result);
        
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