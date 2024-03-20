#include <stdio.h>
#include <math.h>

int main()
{
    // PART ONE
    // ASK USER FOR INPUT
    int number;
    printf("ENTER AN INTEGER NUMBER: ");
    scanf("%d", &number);

    // PART TWO
    // CHECK IF THE NUMBER IS A PERFECT SQUARE
    int isPerfectSquare = 0;
    for (int i = 1; i * i <= number; i++)
    {
        if (i * i == number)
        {
            isPerfectSquare = 1;
            break;
        }
    }

    // PART THREE
    // DETERMINE PRIME NUMBER
    int count = 0;
    if (number > 1)
    { // Numbers less than or equal to 1 are not prime
        for (int i = 2; i * i <= number; i++)
        { // Optimized loop for efficiency
            if (number % i == 0)
            {
                count++;
                break; // Exit the loop if a divisor is found (not prime)
            }
        }
    }

    if (count == 0)
    {
        printf("%d is a prime number\n", number);
    }
    else
    {
        printf("%d is not a prime number\n", number);
    }

    return 0;
}
