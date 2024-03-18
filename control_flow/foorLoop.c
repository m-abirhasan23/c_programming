#include <stdio.h>
int main()
{
    // FOR LOOP
    for (int i = 0; i <= 100; i++)
    {
        printf("FOR LOOP %d\n", i);
    }
    // WHILE LOOP
    int i = 0;
    while (i <= 100)
    {
        printf("WHILE LOOP %d\n", i);
        i++;
    }
    // DO WHILE LOOP
    int j = 0;
    do
    {
        printf("DO WHILE LOOP %d\n ", j);
        j++;
    } while (j <= 100);

    return 0;
}