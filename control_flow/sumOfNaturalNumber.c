#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
    }
    else
    {
        // Calculate sum using a loop
        for (i = 1; i <= n; i++)
        {
            sum += i;
        }

        printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}
