#include <stdio.h>

/* write a program that  reads in the grades of 50 students in a course (out of 100 points each ) 
and count the number of A students ( grade > 85 ) 
and the number of B students (grade > 75 ).*/

int main(){

    int count = 1, grade, aStudents = 0 , bStudents = 0;

    while(count <= 5){

        printf("Enter the student grade: ");
        scanf("%d", &grade);

        if(grade > 85){
            aStudents ++;
        }else if(grade > 75){
            bStudents ++;
        }
        count++;
    }

    printf("Number of A students: %d \n", aStudents);
    printf("Number of B students: %d \n", bStudents);
    

    return 0;
}