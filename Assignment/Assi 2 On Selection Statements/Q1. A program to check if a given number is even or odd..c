#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("Enter An Number To Check Given Number is Even or Odd : \n\n\n");
    scanf("%d",&num);

    if(num == 0)
    {
        printf("Given Num is Zero");
    }
    else if(num % 2 == 0)
    {
        printf("Given Num is Even");
    }
    else
    {
        printf("Given Num is Odd");
    }

    getch();
    return 0;
}
