#include <stdio.h>

void factorial(int n, int *result)
{
    int i;
    *result = 1;

    for(i = 1; i <= n; i++)
    {
        *result = (*result) * i;
    }
}

int main()
{
    int num = 5;
    int fact;

    factorial(num, &fact);

    printf("Factorial = %d\n", fact);

    return 0;
}