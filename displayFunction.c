#include <stdio.h>

/* called  DisplayMessage ( ) which you can call from main ( ) to describe the pollution index value it receives as a parameter.

  Your city describes a pollution Index 
  less than 35 as “Pleasant”, 
  35 through 60 as “Unpleasant”, 
  and above 60 as “Health Hazard.” */

void DisplayMessage(int pollution_index);

int main(){

    int pollution_index;
    printf("Enter the pollution index: ");
    scanf("%d", &pollution_index);
    
    DisplayMessage(pollution_index);

    return 0;
}

void DisplayMessage(int pollution_index){
    if(pollution_index < 35){
        printf("Pleasant");
    }else if(pollution_index <= 60){
        printf("Unpleasant");
    }else if(pollution_index > 60){
        printf("Health Hazard.");
    }
}