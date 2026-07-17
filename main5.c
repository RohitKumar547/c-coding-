#include<stdio.h>
#include<string.h>

int main()
{
int age = 0;
float cgpa = 0.0f;
char grade = '\0';
char name[30] = "";
printf("enter your age:");
scanf("%d",&age);

printf("enter your cgpa:");
scanf("%f",&cgpa);

printf("enter your grade:");
scanf(" %c",&grade);


getchar();
printf("enter your name:");
fgets(name,sizeof(name),stdin);
name[strlen(name)-1]='\0';

printf("Name = %s\n",name);
printf("Age = %d\n",age);
printf("Cgpa = %f\n",cgpa);
printf("Grade = %c\n",grade);

return 0;
}