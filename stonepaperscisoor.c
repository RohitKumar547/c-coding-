#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner (int UserChoice,int ComputerChoice);


int main(){
    srand(time(NULL));
    printf("STONE PAPER SCISSOR GAME\n");
    int UserChoice = getUserChoice();
    int ComputerChoice = getComputerChoice();
    switch (UserChoice)
    {
    case 1:
        printf("YOU CHOOSE STONE\n");
        break;
    case 2:
        printf("YOU CHOOSE PAPER\n");
        break;
    case 3:
        printf("YOU CHOOSE SCISSOR\n");
        break;
    }
    switch (ComputerChoice)
    {
    case 1:
        printf("COMPUTER CHOOSE STONE\n");
        break;
    case 2:
        printf("COMPUTER CHOOSE PAPER\n");
        break;
    case 3:
        printf("COMPUTER CHOOSE SCISSOR\n");
        break;
    }
    checkWinner(UserChoice,ComputerChoice);
    return 0;

}
    int getComputerChoice(){
        return (rand()%3)+1;
    }
    int getUserChoice(){
        int choice=0;
        do{
            printf("choice an option\n");
            printf("1.Stone\n");
            printf("2.paper\n");
            printf("3.scissor\n");
            printf("Enter your choice:");
            scanf("%d",&choice);

        }while (choice < 1 || choice >3);
        return choice;
    }
    void checkWinner (int UserChoice,int ComputerChoice){
        if(UserChoice== ComputerChoice){
            printf("it's a tie");
        }
        else if(UserChoice==1 && ComputerChoice==3){
            printf("YOU WIN!!");
        }
        else if(UserChoice==2 && ComputerChoice==1){
            printf("YOU WIN!!");
        }
        else if(UserChoice==3 && ComputerChoice==2){
            printf("YOU WIN!!");
        }
        else{
            printf("YOU LOSE!!");
        }
    
    }
