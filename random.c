#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int min = 1;
    int max = 100;
    int randomNum1 = (rand() % max)+min;
    int randomNum2 = (rand() % max)+min;
    int randomNum3 = (rand() % max)+min;

    printf("%d\n",randomNum1);
    printf("%d\n",randomNum2);
    printf("%d\n",randomNum3);

    return 0;
}