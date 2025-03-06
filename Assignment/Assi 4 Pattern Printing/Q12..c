#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,iRow = 0, iCol =0;
    char chb = 'A', chs = 'a';

    printf("Enter Row : ");
    scanf("%d",&iRow);

    printf("Enter Column : ");
    scanf("%d",&iCol);

    for(i=1;i<=iCol;i++)
    {
        for(j=1;j<=iRow;j++)
        {
            if(j % 2 != 0)
            {
                printf("%3c",chs);
            }
            else
            {
                printf("%3c",chb);
            }
        }

        printf("\n");
        chs++;
        chb++;
    }

    getch();
    return 0;
}
