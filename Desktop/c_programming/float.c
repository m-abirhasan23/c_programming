#include <stdio.h>
float mul(float a, float b)
{
    // multiply two numbers
    float multiply = a * b;
    printf("This multiply of %.2f and %.2f is %.2f", a, b, multiply);
    return 0;
}
int main()
{
    float a, b, total;

    // ask user for two floating number inter

    printf("Enter a floating number: ");
    scanf("%f", &a);
    printf("Enter a second floating number: ");
    scanf("%f", &b);
    mul(a, b);
    return 0;
}
