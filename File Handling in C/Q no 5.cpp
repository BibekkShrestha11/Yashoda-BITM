#include <stdio.h>

int main()
{
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourcePath);

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL)
    {
        printf("Cannot open source file\n");
        return 1;
    }

    printf("Enter destination file name: ");
    scanf("%s", destPath);

    destFile = fopen(destPath, "w");
    if (destFile == NULL)
    {
        printf("Cannot create destination file\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF)
        fputc(ch, destFile);

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;
}