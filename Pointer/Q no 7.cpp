#include <stdio.h>

int* getValue()
{
    static int a = 25;
    return &a;
}

int main()
{
    int *ptr;

    ptr = getValue();

    printf("Value = %d\n", *ptr);

    return 0;
}