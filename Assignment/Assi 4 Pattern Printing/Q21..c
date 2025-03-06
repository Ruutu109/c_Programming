#include<stdio.h>
#include<conio.h>

int main()
{
    int Num =0,i = 0, j = 0;

    printf("Enter Number : ");
    scanf("%d",&Num);

    for(i = 1 ; i <= Num; i++)
     {
        char ch = 'A';
        for(j = 1; j <= i; j++)
        {
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");

    }

    getch();
    return 0;
}
