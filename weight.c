#include<stdio.h>

int main()
{
//weight converter
int choice  = 0;
float pounds = 0.0f;
float kilogram =0.0f;

printf("weight conversion mechanism\n");
printf("1. kilogram to pounds\n");
printf("2. pounds  to kilogram\n");
printf("enter the choice: 1 or 2:");
scanf("%d",&choice);

if (choice == 1){
    // kilogram to pounds
    printf("enter the weight in kilogram:");
    scanf("%f",&kilogram);
    pounds=kilogram*2.20462;
    printf("%.2f kilogram is equal to %.2f pounds",kilogram,pounds);


}
else if (choice == 2){
    // pounds to kilogram
    printf("enter the weight in pounds");
    scanf("%f",&pounds);
    kilogram=pounds*2.20462;
    printf("%.2f pounds is equal to %.2f kilogram",pounds,kilogram);



}
else{
    printf("you enter the invalid statement please enter 1 or 2");
}
return 0;
}