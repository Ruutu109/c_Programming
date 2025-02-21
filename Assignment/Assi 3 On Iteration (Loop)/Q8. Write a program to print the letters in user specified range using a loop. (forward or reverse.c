#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';
    char str= '\0';
    char end= '\0';

    printf("Enter Starting Point \n");
    scanf(" %c",&str);

    printf("Enter Ending Point \n");
    scanf(" %c",&end);

    if(str <= end)
    {
        for(ch = str; ch <= end; ch++)
        {
            printf("\n %c ",ch);
        }
    }
    else
    {
        for(ch = str; ch >= end; ch--)
        {
            printf("\n %c ",ch);
        }
    }

    getch();
    return 0;
}
