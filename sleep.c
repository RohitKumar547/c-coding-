#include<stdio.h>
#include <windows.h>

int main(){
    for(int i=1;i<10;i++){
        Sleep(100);
        printf("%d\n",i);
    }
    printf("it's time");
    return 0;
}