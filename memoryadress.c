#include <stdio.h>

int main()
{
    int age = 20;

    printf("Value = %d\n", age);
    printf("Address = %p\n", (void *)&age);

    return 0;
}