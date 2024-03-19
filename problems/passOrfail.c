// wRITE A PROGRAM USING TERNARY OPERATOR TO CHECK IF STUDENT PASSED OF FAIL IN THE EXAM

#include <stdio.h>

int main()
{

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    number >= 60 && number <= 100 ? printf("passed") : printf("failed");

    return 0;
}