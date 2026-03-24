#include <stdio.h>
#include <string.h>

int main()
{
    FILE *src, *temp;
    char oldWord[100], newWord[100], buffer[1000];

    printf("Enter the word to search for: ");
    scanf("%s", oldWord);

    printf("Enter the word to replace it with: ");
    scanf("%s", newWord);

    src = fopen("test.txt", "r");
    if (src == NULL)
    {
        printf("Unable to open test.txt\n");
        return 1;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL)
    {
        printf("Unable to create temporary file\n");
        fclose(src);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), src) != NULL)
    {
        char *pos = buffer;
        while ((pos = strstr(pos, oldWord)) != NULL)
        {
            int index = pos - buffer;
            buffer[index] = '\0';
            fprintf(temp, "%s%s", buffer, newWord);
            pos += strlen(oldWord);
            memmove(buffer, pos, strlen(pos) + 1);
            pos = buffer;
        }
        fprintf(temp, "%s", buffer);
    }

    fclose(src);
    fclose(temp);

    remove("test.txt");
    rename("temp.txt", "test.txt");

    printf("All occurrences of \"%s\" have been replaced with \"%s\" in test.txt\n", oldWord, newWord);

    return 0;
}