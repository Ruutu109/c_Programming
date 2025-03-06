#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,iRow = 0, iCol =0,Num = 5;

    printf("Enter Row : ");
    scanf("%d",&iRow);

    printf("Enter Column : ");
    scanf("%d",&iCol);

    for(i=1;i<=iCol;i++)
    {
        for(j=1;j<=iRow;j++)
        {
            printf("%4d",Num);
            Num+=5;
        }
        printf("\n");
    }

    getch();
    return 0;
}
