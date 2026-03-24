#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *inFile, *outFile;
    int shift;
    char ch;

    printf("Enter shift key used for encryption: ");
    scanf("%d", &shift);

    inFile = fopen("encrypted.txt", "r");
    outFile = fopen("decrypted.txt", "w");

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
                ch = ((ch - 'A' - shift + 26) % 26) + 'A';
            else if (ch >= 'a' && ch <= 'z')
                ch = ((ch - 'a' - shift + 26) % 26) + 'a';
        }
        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("File decrypted successfully to decrypted.txt\n");

    return 0;
}