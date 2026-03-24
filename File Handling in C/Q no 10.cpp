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

    fp = fopen("students.dat", "rb");
    if (fp == NULL)
    {
        printf("Unable to open students.dat\n");
        return 1;
    }

    fread(students, sizeof(struct Student), 3, fp);

    printf("Records read from file:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name : %s\n", students[i].name);
        printf("Roll : %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    fclose(fp);

    return 0;
}