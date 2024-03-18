#include <stdio.h>

int main()
{

    // INITIALIZE ALL VARIABLES
    int number;
    // ASK USER FOR GIVE INPUT FOR A INTEGER NUMBER
    printf("Enter a integer number: ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("Positive number");
    }
    else
    {
        printf("Negative Number");
    }

    return 0;
}