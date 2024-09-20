#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("Enter Character = ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch<='Z')
    {
        printf("Given Character is Capital");
    }
    else if(ch >= 'A' && ch<='Z')
    {
        printf("Given Character is Smaller");
    }
    else
    {
        printf("Given character is nor Capital neither Smaller");
    }

    getch();
    return 0;
}
