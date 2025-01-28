#include<stdio.h>
#include<conio.h>

int main()
{
    int A = 0;

    printf("Enter 1 Number To Check the Number is Divisible by 7 : \n\n\n");
    scanf("%d",&A);
    if(A % 7 == 0)
    {
        printf("%d  is Divisible by 7",A);
    }

    else
    {
        printf("%d  is not Divisible by 7",A);
    }

    getch();
    return 0;
}
