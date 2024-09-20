#include<stdio.h>
#include<conio.h>

int main()
{
    int  num = 0, num2 = 0;

    printf("Enter First Number : ");
    scanf("%d",&num);
    printf("Enter Second Number : ");
    scanf("%d",&num2);

    if(num > num2)
    {
        printf("First Number is Maximum");
    }
    else
    {
        printf("Second Number is Maximum");
    }

    getch();
    return 0;
}
