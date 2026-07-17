#include<stdio.h>

int main()
{
    char operator ='\0';
    double num1 =0;
    double num2 =0;
    float result =0;

    printf("enter the first number:");
    scanf("%lf",&num1);

    printf("enter the operator:");
    scanf(" %c",&operator);

    printf("enter the second number:");
    scanf("%lf",&num2);

    switch (operator)
    {
        case '+':
        result=num1+num2;
        break;
        case '-':
        result=num1-num2;
        break;
        case '*':
        result=num1*num2;
        break;
        case '/':
        if (num2==0){
            printf("you can't divide by 0\n");
        }
        else if (num1==0){
            printf("you can't divide by 0\n");
        }
        else{
            result=num1/num2;
        }

        
        break;
    default:
        printf("plese enter the valid statement");
    }    

printf("result=%.2f",result);
}