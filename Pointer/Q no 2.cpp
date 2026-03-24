#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;

    ptr = &a;

    printf("Value of a = %d\n", a);

    printf("ptr (address of a) = %p\n", ptr);
    printf("*ptr (value at that address) = %d\n", *ptr);

    printf("&ptr (address of pointer itself) = %p\n", &ptr);

    return 0;
}