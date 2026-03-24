#include <stdio.h>

void swapArrays(int *a, int *b, int n)
{
    int i, temp;
    for (i = 0; i < n; i++)
    {
        temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main()
{
    int arr1[100], arr2[100], n, i;
    printf("Length of arrays: ");
    scanf("%d", &n);
    printf("Enter elements of first array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr1 + i);
    }
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr2 + i);
    }

    swapArrays(arr1, arr2, n);
    printf("After swapping Array no 1: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr1 + i));
    }
    printf("\n");
    printf("After swapping array no 2: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr2 + i));
    }
    printf("\n");

    return 0;
}