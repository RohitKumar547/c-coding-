#include<stdio.h>

int main(){
    int rows = 0;
    int columns = 0;
    char symbol ='\0';
    printf("enter the number of rows:");
    scanf("%d",&rows);

    printf("enter the number of columns:");
    scanf("%d",&columns);

    printf("enter the symbol:");
    scanf(" %c",&symbol);
    for(int i =0 ; i<columns;i++){
        printf(" %c",symbol);   
    for(int i = 0 ; i<rows;i++){
        printf(" %c",symbol);
    }
        printf("\n");
    }

    

}