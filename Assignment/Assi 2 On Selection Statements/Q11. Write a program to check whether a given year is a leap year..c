#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("Enter a Year To Check Given Year Leap Year or not : \n\n");
    scanf("%d",&Year);

    if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
    {
        printf("\n\n %d is a leap year", Year);
    }
    else
    {
        printf("\n\n %d is not a leap year", Year);
    }

    getch();
    return 0;
}
