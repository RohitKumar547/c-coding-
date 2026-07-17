#include <stdio.h>

int main()
{
    int dayinaweek =0;
    printf("enter the number between 1-7:");
    
    scanf("%d",&dayinaweek);

    switch (dayinaweek)
    {
    case 1:
        printf("its a monday");
        break;
    case 2:
    printf("its a tuesday");
    break;
    case 3:
    printf("its a wednesday");
    break;
    case 4:
    printf("its a thursday");
    break;
    case 5:
    printf("its a friday");
    break;
    case 6:
    printf("its a saturday");
    break;
    case 7:
    printf("its a sunday");
    break;
    
    
    default:
    printf("plese only enter the number between 1-7!!");
        
    }
    return 0;
}