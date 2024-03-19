#include <stdio.h>

int main()
{
    // initialize variable
    int a, b, sum;
    // ask user for enter a value
    printf("Enter a integer number: ");
    scanf("%d", &a);
    // ask user for another a value
    printf("Enter a integer number: ");
    scanf("%d", &b);

    // operate calculation
    sum = a + b;
    printf("%d \n", sum);

    // subtraction
    sum = a - b;
    printf("%d \n", sum);
    // multiplication
    sum = a * b;
    printf("%d \n", sum);
    // division
    sum = a / b;
    printf("%d \n", sum);
    return 0;
}