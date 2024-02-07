#include <stdio.h>

// Use a while loop to read  100  grades in an exam and find their total.

int main(){

    int count = 1, total = 0, grade;

    while(count <= 100){
        printf("Enter student grade: ");
        scanf("%d", &grade);
        total += grade;
        count ++;
    }
    printf("The total number is %d \n", total);

    return 0;
}