#include <stdio.h>

struct Student
{
    char name[50];
    int roll_number;
    char grade_type;

    union
    {
        char pass_fail;
        float gpa;
    } grades;
};

int main()
{
    struct Student s;

    printf("Enter student details:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter grade type (P for Pass/Fail, G for GPA): ");
    scanf(" %c", &s.grade_type);

    if(s.grade_type == 'P' || s.grade_type == 'p')
    {
        printf("Enter result (P for Pass, F for Fail): ");
        scanf(" %c", &s.grades.pass_fail);
    }
    else if(s.grade_type == 'G' || s.grade_type == 'g')
    {
        printf("Enter GPA: ");
        scanf("%f", &s.grades.gpa);
    }

    printf("\nStudent Details:\n");

    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Grade Type: %c\n", s.grade_type);

    if(s.grade_type == 'P' || s.grade_type == 'p')
    {
        printf("Result: %c\n", s.grades.pass_fail);
    }
    else if(s.grade_type == 'G' || s.grade_type == 'g')
    {
        printf("GPA: %.2f\n", s.grades.gpa);
    }

    return 0;
}