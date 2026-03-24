#include <stdio.h>

int main()
{
    int arr[100], n, *start, *end, temp, i;
    printf("Length of array: ");
    scanf("%d", &n);
    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    start = arr;
    end = arr + n - 1;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}