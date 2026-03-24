#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student students[3];
    FILE *fp;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    fp = fopen("students.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fwrite(students, sizeof(struct Student), 3, fp);

    fclose(fp);

    printf("\nStudent records successfully written to students.dat\n");

    return 0;
}