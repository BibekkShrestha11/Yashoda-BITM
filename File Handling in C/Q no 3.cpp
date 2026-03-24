#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    int n, i;
    char line[1000];

    printf("Enter number of lines: ");
    scanf("%d", &n);

    fp = fopen("output.txt", "w");
    if(fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter %d lines:\n", n);
    getchar();

    for(i = 0; i < n; i++)
    {
        fgets(line, sizeof(line), stdin);
        fputs(line, fp);
    }

    fclose(fp);

    printf("\nText successfully written to output.txt\n");

    return 0;
}