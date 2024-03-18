#include <stdio.h>

int main()
{

    // INITIALIZE ALL VARIABLES
    int number1, number2, number3;
    // ASK USER FOR GIVE INPUT FOR ALL THREE INTEGER NUMBER
    printf("Enter a integer number 1: ");
    scanf("%d", &number1);
    printf("Enter a integer number 2: ");
    scanf("%d", &number2);
    printf("Enter a integer number 3: ");
    scanf("%d", &number3);
    if (number1 > number2 && number2 > number3)
    {
        printf("between number %d,%d and %d the number %d is bigger", number1, number2, number3, number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("between number %d,%d and %d the number %d is bigger", number1, number2, number3, number2);
    }
    else if (number1 == number2 && number2 == number3)
    {
        printf("between number %d,%d and %d all numbers are equal", number1, number2, number3);
    }
    else
    {
        printf("between number %d,%d and %d the number %d is bigger", number1, number2, number3, number3);
    }

    return 0;
}