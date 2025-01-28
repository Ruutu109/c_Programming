#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("Enter an Number To Check Given Number Smaller Than 10 or not : \n\n\n");
    scanf("%d",&Num);

    if(Num < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("World");
    }

    getch();
    return 0;
}
