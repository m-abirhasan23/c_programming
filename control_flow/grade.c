#include <stdio.h>
int main()
{

    // INITIALIZE ALL VARIABLES
    int NUMBER;
    // ASK USER FOR GIVE INPUT FOR A INTEGER NUMBER
    printf("ENTER YOUR MARKS:   ");
    scanf("%d", &NUMBER);
    // VERIFY USER GIVE CORRECT NUMBER
    if (NUMBER < 0 && NUMBER > 100)
    {
        printf("PLEASE ENTER VALID NUMBER BETWEEN 1 TO 100");
    }
    else
    {
        if (NUMBER >= 90)
        {
            printf(" A ");
        }
        else if (NUMBER >= 80 && NUMBER < 90)
        {
            printf(" B ");
        }
        else if (NUMBER >= 70 && NUMBER < 80)
        {
            printf(" C ");
        }
        else if (NUMBER >= 60 && NUMBER < 70)
        {
            printf(" D ");
        }
        else
        {
            printf("YOU FAILED YOUR EXAM");
        }
    }

    return 0;
}
