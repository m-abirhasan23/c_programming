#include <stdio.h>

int main()
{

    // initialize all the necessary variables as integer value

    int days, month;

    // ask user for enter days number in integer format

    printf("Enter Days : ");
    scanf("%d", &days);
    month = (days / 30);
    days = (days % 30);
    printf("There is %d month and %d Days", month, days);
    return 0;
}