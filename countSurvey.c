#include <stdio.h>

/* Write a program that does a survey on a certain question. The question has 3 possible answers.  
Run the survey on 20 people and then display the number of people who chose each answer.
Example:
    What is your favorite  subject?
	A. Mathematics
	B. Economics
	C. Programming
 */
int main(){

    int count = 1, aAnswers = 0, bAnswers = 0, cAnswers = 0;
    char c;

    printf("What is your favorite  subject? \n A. Mathematics \n B. Economics\n  C. Programming \n");

    while (count <= 3)
    {
        printf("Enter your choise (A, B, c): ");
        scanf(" %c", &c);

        if(c == 'a' || c == 'A'){
            aAnswers ++;
            count ++;
        }else if (c == 'b' || c == 'B')
        {
            bAnswers ++;
            count ++;
        }else if (c == 'c' || c == 'C'){
            cAnswers ++;
            count ++;
        }else{
            printf("You enter invalid character");
        }
        
        
    }
    
    printf("The number of people who choose A %d \n", aAnswers);
    printf("The number of people who choose B %d \n", bAnswers);
    printf("The number of people who choose C %d \n", cAnswers);

    return 0;
}