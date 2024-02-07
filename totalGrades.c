#include <stdio.h>

// Program to Display "Hello, World!"
int main(){

    int count = 1, total = 0, grade;

    while(count <= 5){
        printf("Enter student grade: ");
        scanf("%d", &grade);
        total += grade;
        count ++;
    }
    printf("The total number is %d \n", total);

    return 0;
}