#include<stdio.h>
#include<conio.h>

int main()
{
    int  num = 0, num2 = 0;

    printf("Enter First Number : ");
    scanf("%d",&num);
    printf("Enter Second Number : ");
    scanf("%d",&num2);


    if(num == num2)
    {
        printf("Both Numbers are Equal");
    }
    else if(num > num2)
    {
        printf("%d Number is Maximum",num);
    }
    else
    {
        printf("%d Number is Maximum",num2);
    }

    getch();
    return 0;
}
