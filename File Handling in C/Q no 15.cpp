#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void addRecord();
void viewRecords();
void deleteRecord();
void updateRecord();

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Record\n");
        printf("2. View Records\n");
        printf("3. Delete Record\n");
        printf("4. Update Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addRecord();
                break;
            case 2:
                viewRecords();
                break;
            case 3:
                deleteRecord();
                break;
            case 4:
                updateRecord();
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

void addRecord()
{
    struct Student s;
    FILE *fp = fopen("students.dat", "ab");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    printf("Record added successfully!\n");
}

void viewRecords()
{
    struct Student s;
    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL)
    {
        printf("No records found.\n");
        return;
    }

    printf("\nAll Student Records:\n");
    printf("Roll\tName\tMarks\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("%d\t%s\t%.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
}

void deleteRecord()
{
    int rollNo;
    printf("Enter roll number to delete: ");
    scanf("%d", &rollNo);

    struct Student s;
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL)
    {
        printf("No records to delete.\n");
        return;
    }

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.roll != rollNo)
            fwrite(&s, sizeof(s), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    printf("Record deleted (if existed).\n");
}

void updateRecord()
{
    int rollNo, found = 0;
    printf("Enter roll number to update: ");
    scanf("%d", &rollNo);

    struct Student s;
    FILE *fp = fopen("students.dat", "rb+");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return;
    }

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.roll == rollNo)
        {
            printf("Enter new name: ");
            scanf("%s", s.name);
            printf("Enter new marks: ");
            scanf("%f", &s.marks);

            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);

            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found)
        printf("Record updated successfully.\n");
    else
        printf("Record not found.\n");
}