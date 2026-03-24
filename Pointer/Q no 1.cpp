#include <stdio.h>

int main()
{
    int a = 10;     
    int *ptr;       

    ptr = &a;       

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);

    printf("Pointer stores address = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}