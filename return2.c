#include<stdio.h>

int cubes(int num){
    int results = num * num * num;
    return results;
}
int main(){

    int num1=cubes(89);
    int num2=cubes(76);
    int num3=cubes(86);
    int num4=cubes(13);
    int num5=cubes(31);

    printf("%d\n",num1);printf("%d\n",num2);printf("%d\n",num3);printf("%d\n",num4);printf("%d\n",num5);
    
    
    

}