#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n* Enter a Character To check Given Character is Alphabet or not :  \n");
    scanf("%c",&ch);

    if((ch >='a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\n\nTrue");
    }
    else
    {
        printf("\n\nFalse");
    }

    getch();
    return 0;
}
