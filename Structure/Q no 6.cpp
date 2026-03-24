#include <stdio.h>

struct example
{
    int i;
    float f;
    char c;
};

union example_union
{
    int i;
    float f;
    char c;
};

int main()
{
    struct example s;
    union example_union u;

    printf("Size of structure = %lu bytes\n", sizeof(s));
    printf("Size of union = %lu bytes\n", sizeof(u));

    return 0;
}