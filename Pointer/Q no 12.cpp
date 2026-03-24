#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;
    int *ptr;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    ptr = arr;
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr + j) < *(ptr + i))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}