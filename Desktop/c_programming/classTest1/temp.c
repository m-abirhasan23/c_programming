// convert celsius to fahrenheit

#include <stdio.h>

int main()
{

    // create a variable to store temperature value
    float celsius, fahrenheit;
    // ask user for input a number ;
    printf("Enter a temperature in celsius: ");
    scanf("%f", &celsius);
    // convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32; // Formula for conversion: Fahrenheit = (Celsius * 9/5) + 32

    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
