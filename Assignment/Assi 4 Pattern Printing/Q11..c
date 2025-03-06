#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,iRow = 0, iCol =0;

    printf("Enter Row : ");
    scanf("%d",&iRow);

    printf("Enter Column : ");
    scanf("%d",&iCol);

    for(i=1;i<=iCol;i++)
    {
        char chb = 'A', chs = 'a';
        if(i % 2 != 0)
        {
            for(j=1;j<=iRow;j++)
            {

                printf("%3c",chb);
                chb++;

            }
        }
        else
        {
            for(j=1;j<=iRow;j++)
            {

                printf("%3c",chs);
                chs++;

            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
