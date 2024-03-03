#include <stdio.h>

int main()
{
    // initialize variable
    int n;
    // ask user for input
    printf("enter a integer number: \t");
    scanf("%d", &n);
    // check number is input or not
    for (int i = 2; i < n; i++)
    {
        if (n % i ==
            0)
        {
            n = 0;
            break;
        }
    }

    // print the output
    if (n)
    {
        printf("The number is a prime");
    }
    else
    {
        printf("The number is a not prime");
    }

    return 0;
}