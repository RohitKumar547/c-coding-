#include<stdio.h>
#include<string.h>

void happybirthday(char name[],int age){
    printf("happybirthday to you\n");
    printf("happybirthday to you\n");
    printf("happybirthday to %s!\n",name);
    printf("you are %d, years old\n",age);
}

int main(){
    char name[50]="";
    int age=0;
    printf("enter the name:");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    
    printf("enter your age:");
    scanf("%d",&age);

    happybirthday(name,age);

    return 0;



}