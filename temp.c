#include<stdio.h>

int main()
{
int  choice = 0;
float kelvin =0.0f;//this nputs the temperature in kelvin
float celsius = 0.0f;//this inputs the temperature in kelvin
float fahrenheit= 0.0f;//this input the tempersture fahrenheit



printf("temperature conversion mchanism\n:");
printf("1.kelvin to celsius\n");
printf("2.celusius to kelvin\n");
printf("3.fahrenheit to celsius\n");
printf("4.fahrenheit to kelvin\n");
printf("5.kelvin to fahrenheit\n");
printf("6.celsius to fahrenheit\n");
printf("enter the choice 1 to 6:");
scanf("%d",&choice);

if (choice ==1){
    printf("enter the temperature in kelvin:");
    scanf("%f",&kelvin);
    celsius=kelvin-273.15;
    printf("%.2fkelvin is equal to %.2fcelsius",kelvin,celsius);
}
else if (choice==2){
    printf("enter the temperature in celsius:");
    scanf("%f",&celsius);
    kelvin=celsius+273.15;
    printf("%.2fcelsius is equal to %.2fkelvin",celsius,kelvin);
}
else if (choice==3){
    printf("enter the temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit - 32) * 5.0 / 9.0;
    printf("%.2ffahrenheit is equal to %.2fcelsius",fahrenheit,celsius);


}
else if (choice ==4){
    printf("enter the tempertature in fahrenheit:");
    scanf("%f",&fahrenheit);
    kelvin=(fahrenheit - 32) * 5.0 / 9.0 + 273.15;
    printf("%.2ffahrenheit is equal to %.2fkelvin",fahrenheit,kelvin);


}
else if (choice == 5){
    printf("enter the temperature in kelvin:");
    scanf("%f",&kelvin);
    fahrenheit=(kelvin - 273.15) * 9.0 / 5.0 + 32;
    printf("%.2fkelvin is equal to %.2ffahrenheit",kelvin,fahrenheit);

}
else if (choice==6){
    printf("enter the tempersture in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius * 9.0 / 5.0)+32;
    printf("%.2fcelsius is equal to %.2ffahrenheit",celsius,fahrenheit);

}
else{
    printf("you enter the invalis statement plese check:");
}




}