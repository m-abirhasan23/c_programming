#include <stdio.h>

int main()
{
    int number;
    //  ASK USER FOR ENTER A INTEGER NUMBER
    printf("Enter a integer number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is a EVEN Number", number);
    }
    else

        printf("%d is a ODD Number", number);

    return 0;
}
