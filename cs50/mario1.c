
#include <stdio.h>
int main(void)
{
    int height, row, column, space;
    do
    {
        printf("Enter Height: ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);
    for (row = 0; row < height; row++)
    {
        for (space = 1; space <= height - row - 1; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }

        printf("\n");
    }
}
