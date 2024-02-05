#include <stdio.h>

// Program to Add Two Integers
int main(){

    int number1, number2, sum;

    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    sum = number1 + number2;

    printf("The result %d + %d = %d", number1, number2, sum);

    return 0;
}