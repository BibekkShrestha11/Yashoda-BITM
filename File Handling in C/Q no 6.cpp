#include <stdio.h>

int main()
{
    char filename[100];

    printf("Enter the file name to delete: ");
    scanf("%s", filename);

    if (remove(filename) == 0)
        printf("File \"%s\" deleted successfully.\n", filename);
    else
        printf("Error deleting file \"%s\".\n", filename);

    return 0;
}