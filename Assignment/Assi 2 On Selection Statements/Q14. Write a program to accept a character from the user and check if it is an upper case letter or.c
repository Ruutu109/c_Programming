#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("Enter a Character To Check Given Character is Upper, Lower or Other : \n\n");
    scanf("%c",&ch);

    if ((ch >= 'A' && ch <= 'Z'))
    {
        printf("\n\n %c is a Upper Character", ch);
    }
    else if( (ch >= 'a' && ch <= 'z'))
    {
        printf("\n\n %c is a Lower Character", ch);
    }
    else
    {
        printf("\n\n % is not a Character", ch);
    }

    getch();
    return 0;
}
