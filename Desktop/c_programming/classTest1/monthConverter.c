#include <stdio.h>

int main()
{

    int months, days;

    printf("Enter days ");

    scanf("%d", &days);

    months = days / 30;

    days = days % 30;

    printf("%d Months and %d Days ", months, days);
    return 0;
}