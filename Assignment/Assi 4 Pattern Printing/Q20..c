#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0, Num=0;

    printf("Enter Number : ");
    scanf("%d",&Num);

    for(i=1;i<=Num;i++)
    {
        for(j=1;j<=Num;j++)
        {
            if(i==1 || (i+j==Num+1) || i==Num)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }

        }

        printf("\n");
    }

    getch();
    return 0;
}
