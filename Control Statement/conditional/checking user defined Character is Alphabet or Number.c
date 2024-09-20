#include <stdio.h>
#include <conio.h>

int main()
{
    char ch ='\0';

    printf("Enter a Character : ");
    scanf("%c",&ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("It is a Alphabet");
    }
    else if((ch>='0' && ch<='9'))
    {
        printf("It is a Number");
    }
    else
    {
        printf("It's not a Alphabet nor Number");
    }
    getch();
    return 0;
}
