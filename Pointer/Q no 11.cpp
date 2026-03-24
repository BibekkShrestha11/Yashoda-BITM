#include <stdio.h>

int main()
{
    int n, i, target, found = 0;
    int arr[100], *ptr;
    printf("Enter lenth of the array: ");
    scanf("%d", &n);

    ptr = arr;
    printf("\nElements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("\nEnter the target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(*(ptr + i) == target)
        {
            printf("%d found at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("%d not found in array\n", target);
    }

    return 0;
}
