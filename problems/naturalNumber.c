#include <stdio.h>
int main()
{

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 1)
    {
        printf("natural number");
    }
    else
    {
        printf("not a natural number");
    }

    return 0;
}