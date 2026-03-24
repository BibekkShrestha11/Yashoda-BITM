#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int isLeap(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

int monthDays(int month, int year)
{
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(month == 2 && isLeap(year))
        return 29;

    return days[month - 1];
}

int countDays(struct Date d)
{
    int n = d.year * 365 + d.day;

    for(int i = 0; i < d.month - 1; i++)
        n += monthDays(i + 1, d.year);

    n += (d.year/4 - d.year/100 + d.year/400);

    return n;
}

int main()
{
    struct Date d1, d2;
    int days;

    printf("Enter first date:\n");
    printf("Enter day: ");
    scanf("%d", &d1.day);

    printf("Enter month: ");
    scanf("%d", &d1.month);

    printf("Enter year: ");
    scanf("%d", &d1.year);

    printf("\nEnter second date:\n");
    printf("Enter day: ");
    scanf("%d", &d2.day);

    printf("Enter month: ");
    scanf("%d", &d2.month);

    printf("Enter year: ");
    scanf("%d", &d2.year);

    days = countDays(d2) - countDays(d1);

    if(days < 0)
        days = -days;

    printf("\nDifference between dates = %d days\n", days);

    return 0;
}