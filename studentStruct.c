#include <stdio.h>

// Struct 

struct Employee {
    int age;
    double salary;
};

int main(){

    struct Employee employee;

    printf("Enter employee age: ");
    scanf("%d", &employee.age);

    printf("Enter employee salary: ");
    scanf("%lf", &employee.salary);

    printf("The age is %d and salary %.2lf ", employee.age, employee.salary);

    return 0;
}