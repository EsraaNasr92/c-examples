#include <stdio.h>

// Enter numbers in array and print 
int main() {

    int age[5];
    
    printf("Enter 5 inputs values: ");
    
    // Get numbers and store in array
    for(int i = 0; i < 5; i++){
        scanf("%d", &age[i]);
    }

    // Print numbers
    for(int i = 0; i < 5; i++){
        printf("%d ", age[i]);
    }
    
    return 0;
}