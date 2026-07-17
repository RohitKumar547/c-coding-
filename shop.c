#include<stdio.h>
#include<string.h>
int main(){
    char items[50]="";
    float price = 0.0f;
    int quantity =0;
    char currency = '$';
    float total = 0.0f;

    printf("which item you are buying?:");
    fgets(items,sizeof(items),stdin);
    items[strlen(items)-1]='\0';
    printf("what was the price of it?:");
    scanf("%f",&price);
    printf("how many would you like?:");
    scanf("%d",&quantity);

    total= price*quantity;
    printf("\n you brought %d %s/s\n",quantity,items);
    printf("%c%.2f",currency,total);
    return 0;


}