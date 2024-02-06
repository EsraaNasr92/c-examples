#include <stdio.h>

int main() {
    
    int number;
    
    float average, sum = 0.0;
    
    printf("Enter the number of array elements: ");
    scanf("%d", &number);
    
    double arrNumber[number];
    
    printf("Enter %d numbers: ", number);
    
    for(int i = 0; i < number; i++){
        scanf("%lf", &arrNumber[i]);
        sum += arrNumber[i];
    }
    average = sum / number;
    
    printf("The sum result: %.2lf and the average: %.2f \n", sum, average);


    return 0;
}