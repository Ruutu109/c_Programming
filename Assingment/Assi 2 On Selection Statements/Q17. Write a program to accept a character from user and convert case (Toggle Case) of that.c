#include<stdio.h>
#include<conio.h>

int main()
{
    char ch ='\0';

    printf("\n* Enter a Character To check Given Character is Alphabet or not :  \n");
    scanf("%c",&ch);

    if(ch >='a' && ch <= 'z')
    {
        ch = ch - 'a' + 'A';
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 'A' + 'a';
    }

    printf(" Converted Character %c ",ch);
    getch();
    return 0;
}
