#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,iRow = 0, iCol =0;
    char ch = 'A';


    printf("Enter Row : ");
    scanf("%d",&iRow);

    printf("Enter Column : ");
    scanf("%d",&iCol);

    for(i=1;i<=iCol;i++)
    {
        for(j=1;j<=iRow;j++)
        {

            printf("%3c",ch);

        }
        printf("\n");
        ch++;
    }

    getch();
    return 0;
}
