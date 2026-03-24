#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *inFile, *outFile;
    int shift;
    char ch;

    printf("Enter shift key (1-25): ");
    scanf("%d", &shift);

    inFile = fopen("test.txt", "r");
    outFile = fopen("encrypted.txt", "w");

    if (inFile == NULL || outFile == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    while ((ch = fgetc(inFile)) != EOF)
    {
        if (isalpha(ch))
        {
            if (ch >= 'A' && ch <= 'Z')
                ch = ((ch - 'A' + shift) % 26) + 'A';
            else if (ch >= 'a' && ch <= 'z')
                ch = ((ch - 'a' + shift) % 26) + 'a';
        }
        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("File encrypted successfully to encrypted.txt\n");

    return 0;
}