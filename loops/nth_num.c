// PRINT THE NUMBER FROM 0 TO NTH, NTH NUMBER WILL BE GIVEN FROM USER

#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}