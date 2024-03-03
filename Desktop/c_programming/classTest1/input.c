// program for take two input from user and print the value

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

    // now print both input
    printf("The First input is %d and The second input is %d", first_input, second_input);
    return 0;
}