#include <stdio.h>

union data
{
    int i;
    float f;
    char c;
};

int main()
{
    union data d;

    printf("Assigning integer value:\n");
    printf("Enter integer: ");
    scanf("%d", &d.i);

    printf("Value of i = %d\n", d.i);
    printf("Value of f = %f\n", d.f);
    printf("Value of c = %c\n", d.c);

    printf("\nAssigning float value:\n");
    printf("Enter float: ");
    scanf("%f", &d.f);

    printf("Value of i = %d\n", d.i);
    printf("Value of f = %f\n", d.f);
    printf("Value of c = %c\n", d.c);

    printf("\nAssigning character value:\n");
    printf("Enter character: ");
    scanf(" %c", &d.c);

    printf("Value of i = %d\n", d.i);
    printf("Value of f = %f\n", d.f);
    printf("Value of c = %c\n", d.c);

    return 0;
}