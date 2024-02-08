#include <stdio.h>

/* Assume you put 1000 pounds in a projects that returns a profit of about 5% per year. 
How long will it take for your money to double ?*/

int main(){

    int money = 1000;
    float profit_rate = 0.05;
    int years = 0;

    int target_monet = money * 2;

    while(money < target_monet){

        double interest = money * profit_rate;
        money += interest;
        
        years ++;
    }

    printf("Number of years will be: %d \n", years);

    return 0;
}