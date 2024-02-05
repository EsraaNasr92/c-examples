#include <stdio.h>

// Program to Print an Integer (Entered by the User)
int main(){

    int number;
    
    printf("Enter a number: ");

    // Enter number by user
    scanf("%d", &number);

    // Print the integer number
    printf("The integer number is: %d", number);

    return 0;
}