#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';
    char str= '\0';

    printf("Enter Starting Point \n");
    scanf(" %c",&str);

    if(str <= 'Z' && str >='A')
    {
        for(ch = str; ch <= 'Z'; ch++)
        {
            printf("\n %c ",ch);
        }
    }
    else if(str <= 'z' && str >='a')
    {
        for(ch = str; ch >= 'a'; ch--)
        {
            printf("\n %c ",ch);
        }
    }
    else
    {
        printf("Invalid");
    }

    getch();
    return 0;
}
