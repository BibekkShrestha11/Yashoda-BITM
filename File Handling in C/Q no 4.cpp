#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i;
    char line[1000];

    printf("Enter number of lines to append: ");
    scanf("%d", &n);
    getchar();

    fp = fopen("test.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening test.txt\n");
        return 1;
    }

    printf("Enter %d lines to add:\n", n);
    for (i = 0; i < n; i++)
    {
        fgets(line, sizeof(line), stdin);
        fprintf(fp, "%s", line);
    }

    fclose(fp);

    printf("\nLines successfully appended to test.txt\n");

    return 0;
}