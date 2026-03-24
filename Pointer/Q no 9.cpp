#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    int i;

    ptr = arr;
    printf("Enter elements of array: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("\nElements are: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}