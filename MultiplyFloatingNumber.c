#include <stdio.h>

// Program to Multiply Two Floating-Point Numbers
int main(){ 
    
    double number1, number2, product;

    // Add 2 numbers in the same time
    printf("Enter the 2 floating number: ");
    scanf("%lf %lf", &number1, &number2); 

    product = number1 * number2;

    printf("The Product of Two Floating-Point Numbers = %.2lf", product);

    return 0;
}