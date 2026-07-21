#include<stdio.h>
#include<string.h>

int main(){
    char name[50]="";
    printf("enter the name ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    while(strlen(name) == 0){
        printf("you didnot enter your name plese enter!!");
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1]='\0';
    }
printf("hello%s",name);

return 0;



}