#include<stdio.h>

int main(){
    char Player1,Player2;

    printf("Input from player1:");
    scanf(" %c", &Player1);


    printf("Input from Player2:");
    scanf(" %c", &Player2);


    if(Player1==Player2){

        printf("It's a tie\n");
    }
    else if((Player1=='R' && Player2=='S')||
             
             (Player1=='P' && Player2=='R')||

             (Player1=='S' && Player2=='P')){


        printf("Player1 wins\n");

            }

        else{

            printf("Player2 wins\n");
        }  

        return 0; 
}