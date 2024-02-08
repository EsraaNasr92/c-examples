#include <stdio.h>

/* Assume you put 5000 pounds in a projects that returns a profit of about 10% per year. 
How much money will you have in 5 years ?*/

int main(){

    double money = 5000;
    double profit_rate = 0.1;
    int years = 0;

    
    while(years < 5){

        double interest = money * profit_rate;
        money += interest;
        
        years ++;
    }

    printf("Money will be: %.2lf after 5 years \n", money);

    return 0;
}