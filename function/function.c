#include <stdio.h>

void checkFunction();
int main()
{
    checkFunction();
    return 0;
}

void checkFunction()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
}