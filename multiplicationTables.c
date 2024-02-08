#include <stdio.h>

/*
Write a program that displays the multiplication tables  ( 1 - 12 ). 

 	1  x  1  =  1
 	1  x  2  =  2
 	….
    1   x  12  =  12
    2  x  1  =   2		
	….
	12 x 12  = 144
*/
int main(){

    int i, j, product;

    for (i = 1; i <= 12; i++){
        for (j = i; j <= 12; j++){
            product = i * j;
            printf("%d * %d = %d", i, j, product);
            printf("\n");
        }
        printf("\n");
        
    }
    

    return 0;
}