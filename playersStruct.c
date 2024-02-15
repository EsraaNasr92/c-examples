#include <stdio.h>

// Employee Struct 

struct players {
    char name[64];
    int score;
}player1, player2;

int main(){
    
    struct players;
    
    for (int i = 1; i <= 2; i++){
        printf("Enter player name ");
        scanf("%c", &player1[i].name);

        printf("Enter player score ");
        scanf("%d", &player2[i].name);
    }
    
   
    return 0;
}