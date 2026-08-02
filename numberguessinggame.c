#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 1000; 
    int answer = (rand()%(max-min+1))+min;

    printf("*** GUESSING GAME ***\n");
    do{
        printf("GUESS THE NUMBER BETWEEN %d-%d\n",max,min);
        scanf("%d",&guess);
        tries++;
        if(guess < answer){
            printf("TOO LOW!!\n");
        }
        else if (guess > answer){
            printf("TOO HIGH!!\n");
        }
        else{
            printf("CORRECT\n");
        }
        
    }while(guess != answer);

    printf("your answer id %d\n",answer);
    printf("it's took you %d tries",tries);





    return 0;
}