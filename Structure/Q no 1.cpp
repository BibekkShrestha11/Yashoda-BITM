#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    int age;
    float marks;
};

int main()
{
    struct student s;

    printf("Enter student details:\n");

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nDisplaying student details:\n");

    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}