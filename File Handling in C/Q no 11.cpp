#include <stdio.h>

int main()
{
    FILE *src1, *src2, *dest;
    char file1[100], file2[100], file3[100];
    int ch;

    printf("Enter the first source file name: ");
    scanf("%s", file1);

    printf("Enter the second source file name: ");
    scanf("%s", file2);

    printf("Enter the destination file name: ");
    scanf("%s", file3);

    src1 = fopen(file1, "r");
    src2 = fopen(file2, "r");
    dest = fopen(file3, "w");

    if (src1 == NULL || src2 == NULL || dest == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    while ((ch = fgetc(src1)) != EOF)
        fputc(ch, dest);

    while ((ch = fgetc(src2)) != EOF)
        fputc(ch, dest);

    fclose(src1);
    fclose(src2);
    fclose(dest);

    printf("Files merged successfully into %s\n", file3);

    return 0;
}