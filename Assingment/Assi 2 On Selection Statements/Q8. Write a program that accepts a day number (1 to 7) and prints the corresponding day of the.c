#include<stdio.h>
#include<conio.h>

int main()
{
    int Day_Num = 0;

    printf("Enter Day Number To Check What Day it is : \n\n\n");
    scanf("%d",&Day_Num);

    if(Day_Num == 1)
    {
        printf("Sunday");
    }
    else if(Day_Num == 2)
    {
        printf("Monday");
    }
    else if(Day_Num == 3)
    {
        printf("Tuesday");
    }
    else if(Day_Num == 4)
    {
        printf("Wednesday");
    }
    else if(Day_Num == 5)
    {
        printf("Thursday");
    }
    else if(Day_Num == 6)
    {
        printf("Friday");
    }
    else if(Day_Num == 7)
    {
        printf("Saturday");
    }
    else
    {
        printf("Invalid Day Number");
    }

    getch();
    return 0;
}
