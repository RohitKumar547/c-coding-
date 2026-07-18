#include<stdio.h>
int square(int num){
    int result =  num * num;
    return result;
}
int main(){
int num1=square(7);
int num2=square(89);
int num3=square(90);
int num4=square(44);
int num5=square(45);


printf("%d\n",num1);
printf("%d\n",num2);
printf("%d\n",num3);
printf("%d\n",num4);
printf("%d\n",num5);
return 0;
}