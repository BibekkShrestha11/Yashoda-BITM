#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct Date d;
    int valid = 1;

    printf("Enter date:\n");
    printf("Enter day: ");
    scanf("%d", &d.day);

    printf("Enter month: ");
    scanf("%d", &d.month);

    printf("Enter year: ");
    scanf("%d", &d.year);

    if(d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1)
        valid = 0;
    else
    {
        int days;

        if(d.month == 2)
        {
            if((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))
                days = 29;
            else
                days = 28;
        }
        else if(d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11)
            days = 30;
        else
            days = 31;

        if(d.day > days)
            valid = 0;
    }

    if(valid)
        printf("The date is valid\n");
    else
        printf("The date is invalid\n");

    return 0;
}