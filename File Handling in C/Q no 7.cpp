#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int characters = 0, words = 0, lines = 0;
    int ch, inWord = 0;

    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open test.txt\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (!isspace(ch) && !inWord)
        {
            words++;
            inWord = 1;
        }

        if (isspace(ch))
            inWord = 0;
    }

    fclose(fp);

    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    return 0;
}