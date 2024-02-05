#include <stdio.h>

//Find ASCII Value of a Character
int main(){

    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("The ASCII value of character %c is %d \n", c, c);

    return 0;
}