#include <stdio.h>

int main()
{
    int age = 18;

    int *ptr = &age;

    printf("Age = %d\n", age);
    printf("Address = %p\n", (void *)&age);
    printf("Pointer = %p\n", (void *)ptr);
    printf("Value using Pointer = %d\n", *ptr);

    return 0;
}