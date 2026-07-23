#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isrunning=true;
    char respond ='\0';
    while(isrunning){
        printf("YOU ARE PLAYING THE GAME:\n");
        printf("WOULD YOU STILL WANT TO PLAY TYPE Y FOR PLAYING:");
        scanf(" %c",&respond);

        if(respond!='y' && respond!='Y'){
            isrunning = false;

        }
        
    }

    printf("YOU EXIT THE GAME\n");

    return 0;
}