#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0,i=0;

    printf("Enter a Number :\n");
    scanf("%d",&num);

    for(i = 1; i <= num; i++)
    {
        printf("*");
    }
    getch();
    return 0;
}
