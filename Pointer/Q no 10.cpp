#include <stdio.h>

int main()
{
    int arr[5], *ptr, i, sum = 0;

    ptr = arr;
    printf("Enter elements of array: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }
    for(i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum =%d\n", sum);

    return 0;
}