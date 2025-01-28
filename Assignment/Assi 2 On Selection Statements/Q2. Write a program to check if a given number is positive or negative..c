#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("Enter An Number To Check Given Number is Positive or Negative : \n\n\n");
    scanf("%d",&num);

    if(num == 0)
    {
        printf("Given Num is Zero");
    }
    else if(num > 0)
    {
        printf("Given Num is Positive");
    }
    else
    {
        printf("Given Num is Negative");
    }

    getch();
    return 0;
}
