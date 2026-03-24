#include <stdio.h>

struct Student
{
    char name[50];
    int roll_number;
    float marks;
};

int main()
{
    struct Student s;
    FILE *fp;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fp = fopen("student.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fp, "%s %d %.2f\n", s.name, s.roll_number, s.marks);
    fclose(fp);

    printf("\nData written to file.\n");

    fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("\nReading data from file:\n");
    fscanf(fp, "%s %d %f", s.name, &s.roll_number, &s.marks);
    printf("Name: %s\nRoll Number: %d\nMarks: %.2f\n", s.name, s.roll_number, s.marks);

    fclose(fp);

    return 0;
}