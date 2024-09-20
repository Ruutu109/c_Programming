#include <stdio.h>
#include <conio.h>

int main()
{
   int num ;

    printf("Enter a Number : ");
    scanf("%d",&num);

    up :
    if(num==0)
    {
        printf("Given Number is Neutral \n Type Another Number");
        goto up;
    }
    else if(num>0)
    {
        printf("Given Number is Positive");
    }
    else if(num<0)
    {
        printf("Given Number is Negative");
    }

    else
    {
        printf("Invalid Character");
    }

    getch();
    return 0;
}
