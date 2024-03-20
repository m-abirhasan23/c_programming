#include <stdio.h>
int main()
{

    // C Program to Check Whether a Number is Positive, Negative, or Zero

    // int number;
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // if (number > 0)
    // {
    //     printf("positive number");
    // }
    // else if (number < 0)
    // {
    //     printf("negative number");
    // }
    // else
    // {
    //     printf("number is 0");
    // }
    //***************************************************************************//
    // C Program to Check Whether Number is Even or Odd
    // int number;
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // number % 2 == 0 ? printf("Even number") : printf("Odd Number");

    //***************************************************************************//
    // C Program to Check Whether a Character is Vowel or Consonant
    // char ch;
    // printf("Enter a character: ");
    // scanf("%c", &ch);
    // if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    // {
    //     printf("given character is vowel");
    // }
    // else
    // {
    //     printf("given character is consonant");
    // }

    // switch (ch)
    // {
    // case 'a':
    // case 'e':
    // case 'i':
    // case 'o':
    // case 'u':
    // case 'A':
    // case 'E':
    // case 'I':
    // case 'O':
    // case 'U':
    //     printf("given character is vowel\n");
    //     break;
    // default:
    //     printf("given character is consonant\n");
    //     ;
    // }
    //***************************************************************************//
    // C Program to Check Leap Year
    // int year;
    // printf("Enter a year: ");
    // scanf("%d", &year);

    // if (year % 400 == 0)
    // {
    //     printf("leap year\n");
    // }
    // else if (year % 100 == 0)
    // {
    //     printf("not a leap year\n");
    // }
    // else if (year % 4 == 0)
    // {
    //     printf("leap year\n");
    // }
    // else
    // {
    //     printf("not a leap year\n");
    // }
    //***************************************************************************//
    // C Program to Find Factorial of a Number
    // int number, sum = 1;
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // for (int i = 1; i <= number; i++)
    // {

    //     sum = sum * i;
    // }
    // printf("%d\n", sum);
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("First %d natural numbers:\n", n);

    for (i = 1; i <= n; ++i)
    {
        printf("%d ", i);
    }

    return 0;
}