// wRITE A PROGRAM TO CHECK IF GIVE character IN LOWERCASE OR UPPERCASE

#include <stdio.h>

int main()
{

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("lowercase");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("uppercase");
    }
    else
    {
        printf("Wrong character input");
    }

    return 0;
}