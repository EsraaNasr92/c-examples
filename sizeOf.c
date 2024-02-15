#include <stdio.h>

// get the size of 
int main(){

    int age;
    double salary;

    float GPA;

    char name[10];

    printf("The size of int: %zu \n", sizeof(age));

    printf("The size of double %zu \n", sizeof(salary));

    printf("The size of float %zu \n", sizeof(GPA));

    printf("The size of char is %zu \n", sizeof(name[10]));

    return 0;
}