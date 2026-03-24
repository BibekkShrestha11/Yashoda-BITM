#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];
    printf("Enter matrix no 1: ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", (*(mat1 + i) + j));
        }
    }
    printf("Enter matrix no 2: ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", (*(mat2 + i) + j));
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            *(*(sum + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
    printf("Sum of matrix is: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }

    return 0;
}