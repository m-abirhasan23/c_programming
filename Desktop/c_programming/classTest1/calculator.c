// make a mini calculator
#include <stdio.h>

int main()
{
    // create two variable to store input
    int first_input, second_input;
    // ask user for input a number ;
    printf("Enter a number: ");
    scanf("%d", &first_input);
    // ask user for another input a number ;
    printf("Enter another number: ");
    scanf("%d", &second_input);

    printf("The addition of %d and %d is %d \n", first_input, second_input, first_input + second_input);
    printf("The subtraction of %d and %d is %d \n", first_input, second_input, first_input - second_input);
    printf("The multiplication of %d and %d is %d \n", first_input, second_input, first_input * second_input);
    printf("The division of %d and %d is %d \n", first_input, second_input, first_input / second_input);
    printf("The modulus of %d and %d is %d \n", first_input, second_input, first_input % second_input);

    return 0;
}