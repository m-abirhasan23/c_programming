// check given input number is leap year or not !

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Check for divisibility by 4
    if (year % 4 == 0)
    {
        // Further check for century year (not divisible by 100)
        if (year % 100 != 0 || year % 400 == 0)
        {
            printf("%d is a leap year.\n", year);
        }
        else
        {
            printf("%d is not a leap year.\n", year);
        }
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
