#include <stdio.h>

int main()
{

    // initialize all the necessary variables as floating data

    float celsius, fahrenheit;

    // ask user for enter celsius value

    printf("Enter fahrenheit value: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.1f", celsius);

    return 0;
}