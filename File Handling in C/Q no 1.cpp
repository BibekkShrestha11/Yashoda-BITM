#include <stdio.h>

int main()
{
    FILE *fp;
    char text[1000];

    printf("Enter text to store in test.txt:\n");
    fgets(text, sizeof(text), stdin);

    fp = fopen("test.txt", "w");
    if(fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text successfully written to test.txt\n");

    return 0;
}