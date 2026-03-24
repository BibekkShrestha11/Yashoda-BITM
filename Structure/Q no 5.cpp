#include <stdio.h>

struct address
{
    char city[30];
    int pin;
};

struct employee
{
    int id;
    char name[30];
    float salary;
    struct address addr;
};

int main()
{
    struct employee e;

    printf("Enter employee details:\n");

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter city: ");
    scanf("%s", e.addr.city);

    printf("Enter pin code: ");
    scanf("%d", &e.addr.pin);

    printf("\nEmployee Details:\n");

    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    printf("City: %s\n", e.addr.city);
    printf("Pin Code: %d\n", e.addr.pin);

    return 0;
}