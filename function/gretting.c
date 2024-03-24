#include <stdio.h>

void greetingBangladesh();
void greetingPakistan();

int main()
{

    char ch;
    printf("Enter B For Bangladesh P For Pakistan: ");
    scanf("%c", &ch);

    if (ch == 'B' || ch == 'b')
    {
        greetingBangladesh();
    }
    else if (ch == 'P' || ch == 'p')
    {
        greetingPakistan();
    }
    else
        printf("I Don't Know");

    return 0;
}

void greetingBangladesh()
{

    printf("your are an Bangladeshi language person");
}

void greetingPakistan()
{

    printf("your are an Urdu language person");
}