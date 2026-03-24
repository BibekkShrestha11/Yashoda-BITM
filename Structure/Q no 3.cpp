#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    struct time t1, t2, diff;

    printf("Enter first time:\n");
    printf("Enter hours: ");
    scanf("%d", &t1.hours);

    printf("Enter minutes: ");
    scanf("%d", &t1.minutes);

    printf("Enter seconds: ");
    scanf("%d", &t1.seconds);

    printf("\nEnter second time:\n");
    printf("Enter hours: ");
    scanf("%d", &t2.hours);

    printf("Enter minutes: ");
    scanf("%d", &t2.minutes);

    printf("Enter seconds: ");
    scanf("%d", &t2.seconds);

    if(t2.seconds > t1.seconds)
    {
        t1.minutes--;
        t1.seconds += 60;
    }
    diff.seconds = t1.seconds - t2.seconds;

    if(t2.minutes > t1.minutes)
    {
        t1.hours--;
        t1.minutes += 60;
    }
    diff.minutes = t1.minutes - t2.minutes;

    diff.hours = t1.hours - t2.hours;

    printf("\nTime Difference = %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}