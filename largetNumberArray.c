#include <stdio.h>

// Find the largest number in array
int main() {

    int n;
    double arr[100];
    
    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%lf", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    
    printf("The largest number is %.2lf \n", arr[0]);
    return 0;
}