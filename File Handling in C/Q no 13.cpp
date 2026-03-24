#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *src, *temp;
    int deleteLine, currentLine = 1;
    char buffer[1000];

    src = fopen("test.txt", "r");
    if (src == NULL)
    {
        printf("Unable to open test.txt\n");
        return 1;
    }

    printf("Enter line number to delete: ");
    scanf("%d", &deleteLine);

    temp = fopen("temp.txt", "w");
    if (temp == NULL)
    {
        printf("Unable to create temporary file\n");
        fclose(src);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), src) != NULL)
    {
        if (currentLine != deleteLine)
            fputs(buffer, temp);
        currentLine++;
    }

    fclose(src);
    fclose(temp);

    remove("test.txt");
    rename("temp.txt", "test.txt");

    printf("Line %d deleted from test.txt\n", deleteLine);

    return 0;
}