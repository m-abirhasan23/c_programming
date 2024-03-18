#include <stdio.h>

int main()
{
    int score;

    printf("Enter your numerical score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("Invalid score. Please enter a value between 0 and 100.\n");
    }
    else
    {
        switch (score / 10)
        {
        case 10:
        case 9:
            printf("Your grade: A (Excellent)\n");
            break;
        case 8:
            printf("Your grade: B (Very Good)\n");
            break;
        case 7:
            printf("Your grade: C (Good)\n");
            break;
        case 6:
            printf("Your grade: D (Satisfactory)\n");
            break;
        default:
            printf("Your grade: F (Fail)\n");
            break;
        }
    }

    return 0;
}
