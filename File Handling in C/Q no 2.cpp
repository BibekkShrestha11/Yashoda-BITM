#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("test.txt", "r");

    if (fp == NULL)
    {
        printf("Unable to open test.txt\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);

    return 0;
}