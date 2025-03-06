#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0, Num=0;

    printf("Enter Number : ");
    scanf("%d",&Num);

    for(i=1;i<=Num;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf("   ");
        }
        for(j=1;j<=Num - i +1;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
