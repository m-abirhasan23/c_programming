#include <stdio.h>

int main()

{

    int x = 15, y = 9;

    if (x > 10)
    {

        if (y > 10)

            printf("A");

        else

            printf("B");
    }
    else
    {

        if (y == 9)

            printf("C");

        else

            printf("D");
    }
}